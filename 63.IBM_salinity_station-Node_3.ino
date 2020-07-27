/*
 * code station 3:
 * read sensor salinity and send data to ibm watson
 * Critical Value Detect - send notifi browser
 * updata status Dashboard:
 *  pump river ON/OFF
 *  pump farm  ON/OFF
 * location map station
 * Developer by Hao N - Maple Smart Control - June 15,2020
*/

#include <ESP8266WiFi.h>
#include <ArduinoJson.h> 
#include <PubSubClient.h>
#include <SoftwareSerial.h>


// --------------------------------------------------------------------------------------------
char ssid[] = "MAPLESMARTCONTROL";     
char pass[] = "*MAPLESMARTCONTROL#";  
//char ssid[] = "Free-Wifi HCMUS";     
//char pass[] = "00000011";  

// --------------------------------------------------------------------------------------------

// Watson IoT connection details
#define MQTT_HOST "xxxxxx.messaging.internetofthings.ibmcloud.com"
#define MQTT_PORT 1883
#define MQTT_DEVICEID "d:xxxxx:NodeESP3:Station3" // "d:" ORG ":" DEVICE_TYPE ":" DEVICE_ID;

#define MQTT_USER "use-token-auth"
#define MQTT_TOKEN "xxxxxxxxxxxxxxxx"
#define MQTT_TOPIC "iot-2/evt/station1/fmt/json"
#define MQTT_TOPIC_DISPLAY "iot-2/cmd/display/fmt/json"

// UART - PinS
SoftwareSerial mySerial(D2, D3); // RX|TX
// salinity sensor 
float sal3 = 0.0;
// pinout
#define pump_river D6
#define pump_farm  D7
// setpoint
float high_sal = 500;
// status
int river_pump = 0;
int farm_pump = 0;


// MQTT objects
void callback(char* topic, byte* payload, unsigned int length);
WiFiClient wifiClient;
PubSubClient mqtt(MQTT_HOST, MQTT_PORT, callback, wifiClient);

// variables to hold data
StaticJsonDocument<100> jsonDoc; 
JsonObject payload = jsonDoc.to<JsonObject>();
JsonObject status = payload.createNestedObject("d");
static char msg[50];




// function - get message
void callback(char* topic, byte* payload, unsigned int length) {
  Serial.print("Message arrived [");
  Serial.print(topic);
  Serial.print("] : "); 
  payload[length] = 0; 
  Serial.println((char *)payload);
}

// event control
void event_control()
{
  if(sal3 > high_sal)
  {
    digitalWrite(pump_river,LOW);
    digitalWrite(pump_farm,HIGH);
  }
  else{
    digitalWrite(pump_river,HIGH);
    digitalWrite(pump_farm,LOW);    
  }
}

// get sensor
void getsalinity()
{
  mySerial.print("AT+VALUE=?\r\n");
  if(mySerial.available() > 0){
    String input = mySerial.readString();
    sal3 = (input.toFloat());
    Serial.println(input);
    Serial.println(sal3);
  }
  else{     
  }
  event_control();
}

// get status -> watson
void get_status()
{
  river_pump = digitalRead(pump_river);
  farm_pump = digitalRead(pump_farm);
}

//------------------------------------------------------------------------------------------------
void setup() {
  // output
  pinMode(pump_river,OUTPUT);
  pinMode(pump_farm,OUTPUT);
  digitalWrite(pump_river,HIGH);
  digitalWrite(pump_farm,LOW);
          
  // serial soft pin
  pinMode(D2,INPUT);
  pinMode(D3,OUTPUT);
  mySerial.begin(9600);
  
 // Start serial console
  Serial.begin(115200);
  Serial.setTimeout(2000);
  while (!Serial) { }
  Serial.println();
  Serial.println("ESP8266 Sensor Application");

  // Start WiFi connection
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, pass);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi Connected");


  // Connect to MQTT - IBM Watson IoT Platform
  if (mqtt.connect(MQTT_DEVICEID, MQTT_USER, MQTT_TOKEN)) {
    Serial.println("MQTT Connected");
    mqtt.subscribe(MQTT_TOPIC_DISPLAY);

  } else {
    Serial.println("MQTT Failed to connect!");
    ESP.reset();
  }
  
}

//-------------------------------------------------------------------------------------------------//

void loop() {
  mqtt.loop();
  while (!mqtt.connected()) {
    Serial.print("Attempting MQTT connection...");
    // Attempt to connect
    if (mqtt.connect(MQTT_DEVICEID, MQTT_USER, MQTT_TOKEN)) {
      Serial.println("MQTT Connected");
      mqtt.subscribe(MQTT_TOPIC_DISPLAY);
      mqtt.loop();
    } else {
      Serial.println("MQTT Failed to connect!");
      delay(5000);
    }
  }

    getsalinity();
    get_status();
    status["sal3"] = sal3;
    status["river3"] = river_pump;
    status["farm3"] = farm_pump;
    serializeJson(jsonDoc, msg, 50);
    Serial.println(msg);
    if (!mqtt.publish(MQTT_TOPIC, msg)) { // send data
      Serial.println("MQTT Publish failed");
    }
    
  for (int i = 0; i < 105; i++) {
    mqtt.loop();
    delay(1000);
  } 
}
