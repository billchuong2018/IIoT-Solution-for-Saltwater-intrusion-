# Submission name

[![License](https://img.shields.io/badge/License-Apache2-blue.svg)](https://www.apache.org/licenses/LICENSE-2.0) [![Slack](https://img.shields.io/badge/Join-Slack-blue)](https://callforcode.org/slack) [![Website](https://img.shields.io/badge/View-Website-blue)](https://code-and-response.github.io/Project-Sample/)

A basic GitHub repository example for Call for Code submissions and those projects that join the Code and Response initiative. Not all sections or files are required. You can make this as simple or as in-depth as you need.

*Read this in other languages: [English](README.md).*

## Contents

1. [Short description](#short-description)
1. [Demo video](#demo-video)
1. [The architecture](#the-architecture)
1. [Long description](#long-description)
1. [Project roadmap](#project-roadmap)
1. [Getting started](#getting-started)
1. [Running the tests](#running-the-tests)
1. [Live demo](#live-demo)
1. [Built with](#built-with)
1. [Contributing](#contributing)
1. [Versioning](#versioning)
1. [Authors](#authors)
1. [License](#license)
1. [Acknowledgments](#acknowledgments)

## Short description

### What's the problem?

1) THE REAL-WORLD PROBLEM WE IDENTIFIED 

- Saltwater intrusion rises from downstream from 10 km to 200 km

- Farmer does not know and they use river water to feed the rice field and fruit field, then the big damage to field and fruit

- A lot of Hydropower plant in upstream and water reservoir to keep the water in upstream with impact more than 10 millions water in Mekong Delta 

THE LINK FOR PROBLEM :

https://drive.google.com/file/d/1bVA_JYNbDdZUjP3ZsqkahsLF3cgGuxzS/view?usp=sharing


2) PROBLEM 1 : SALTWATER INTRUSION DURING DEC – JUNE AT VIET NAM EVERY YEAR

- Saltwater intrusion with a salinity rate of four grammes per litter is expected to enter 50-95 kilometers deep into the delta’s main rivers 

- Example : Can Tho City ( Viet Nam )  is nearly 100 kilometer from the sea. read 3,500 parts per thousand (ppt), normal water of less than 250 ppt.
 
- On 2016, 600,000 people lost access to freshwater, while 160,000 hectares of paddy were destroyed and 800,000 tons of rice were lost. 

- On 2016 , Financial damage from that drought hit US$237 million and now it increases more dangerous damages on 2019 - 2020

THE LINK FOR PROBLEM 1:

https://drive.google.com/file/d/12sjwORBtbwz04SWMB63ZCi7_1HJtwn1F/view?usp=sharing


3) PROBLEM 2 :  LACK OF WATER IN HOT SEASON 

- Mekong Delta region have had to struggle with the absence of flood waters.

- When annual flooding does not happen or when it’s late, cropping and fishing activities in the Mekong Delta are disrupted.

- Upstream countries have sought to store water in their dams

THE LINK FOR PROBLEM 2:

https://drive.google.com/file/d/1BE0TSEwnSEBBJgVUu1XnfA4Qx0KOCm_v/view?usp=sharing


### How can technology help?

- Measure the Seawater intrusion contain in Water and put this value in Monitoring. Then sending the alarm to Farm 

- Setting the automation function from River Pump to switch to River Water  Treatment station or Well pump station

- Compare the water contain with experience data from Senior Farmer OR predict data by machine learning for Seawater intrusion contain 

THE LINK OF OUR TECHNOLOGY CAN HELP " ALARM THE SALTWATER INTRUSION CONTAIN AND AUTOMATIC SWITCH FROM RIVER PUMP TO WATER TREATMENT PUMP":

https://drive.google.com/file/d/14gLp7dFUFD2NHwwvQbUH-Lu_90WNqc-R/view?usp=sharing

THE LINK OF OUR TECHNOLOGY WITH IIOT FULL SOLUTION WITH MAPLE SMART CONTROL ARCHITECTURE: 

https://drive.google.com/file/d/1kT8ISEpjGob3DoeO1alxCg3oSuB-tauP/view?usp=sharing

### The idea

- This IIoT solution aims to help farmers, particularly those in adapting climate change, monitor saltwater intrusion data and adapt their crop strategies to optimize water usage. Beside that we will use automation irrigation when they saltwater intrusion is over permission than the pump will switch on from river pump to Saltwater treatment pump to save the water and protect the crop   

- Climate change with sea water rising and keeping the water for  Hydropower Plant and Reservoir of upstream countries are causing farmers to reconsider the crops by alarm of saltwater intrusion water level and automation irrigation, but they are aware of what crops will have a big damage in the new circumstances, according to the changing water availability. 

- Awareness and education of suitable IoT solution with IBM Service in order to make the farmer to reduce the loss  with a good yield, will help farmers make water-friendly choices and control the loss of their crop.

- To achieve these goals we propose the creation of a framework full IIoT solution from IBM Cloud Service and Maple Smart Control full solution to create solutions focused on MONITOR AND CONTROL saltwater intrusion and automation irrigation for farmers affected by climate change around the world. 

- The framework will also target the Agricultural and Aquaculture sectors, also known as IIoT technology for real time and automation control as well as applying the experiences from senior farmers data for Machine Training or predict saltwater instruction when we have enough data for Machine Learning .

- We intend to do the pilot project at 3 points at Mekong Delta with this solution in order to reduce the damage for farmer on 2021. We need the support from IBM and UN for this project will come true.

THE LINK FOR MAPLE SMART CONTROL IDEA :

https://drive.google.com/file/d/1ZGJxv50ivHYuwoWuow2V8qxiMBVaS5Vj/view?usp=sharing


## Demo video

THE LINK FOR OUR DEMO : 

https://youtu.be/jPw6tjzPEKQ

## The architecture


1) Deployed Node-RED Application to IBM Cloud

2) Connected water sensors to Watson IoT Platform

3) Stored water quality data in IBM Cloudant database

4) Display Water Basin maps using Node-RED Dashboard

5) Plot water quality data in Node-RED charts

6) Alert farmers on high water salinity levels

7) Automatic Switch transfer from River pump to Water Treatment pump when the Saltwater intrusion meet the over permission  

THE LINK FOR MAPLE SMART CONTROL CONTROLLER CONNECTS WITH IBM ARCHITECTURE:

https://drive.google.com/file/d/1kT8ISEpjGob3DoeO1alxCg3oSuB-tauP/view?usp=sharing


## Long description

1) Explains why it's better than any existing solution

- At the moment, they have no solution as Mekong Delta at Viet Nam without this system

2) We can reduce the damage for 600,000 people lost access to freshwater, while 160,000 hectares of paddy were destroyed and 800,000 tons of rice were lost. Financial damage from that drought hit US$237 million

3) AT PER TARGET OF CALL FOR CODE 2020 

3.1)  Water sustainability: Maple Smart Control (MSC) will use the Automation Irrigation for when the saltwater intrusion contain is over permission than the pump will automation will switch from river pump to water treatment pump . This IoT-based solution aims to help farmers, particularly those in, monitor saltwater intrusion data and adapt their crop strategies to optimize water usage and save the water treatment material  

3.2) Disaster resiliency: MSC will use the monitor system for saltwater intrusion contain in branch river in hot season at Viet Nam during Dec – June in every years in order to help communities prepare for saltwater intrusion, this app will provide residents with real-time information on the capacity of saltwater intrusion contain

OUR TARGET TO HELP THE FARMERS AND REDUCE THE SALTWATER INTRUSION DAMAGE BY WATER SUSTAINABILITY AND DISASTER RESILIENCY LINK: 

https://drive.google.com/file/d/14gLp7dFUFD2NHwwvQbUH-Lu_90WNqc-R/view?usp=sharing


[More detail is available here](DESCRIPTION.md)

## Project roadmap

OUR PILOT PRODUCT PROJECT ROADMAP LINK:

https://drive.google.com/file/d/1v3lb39qTj4DrrP_PoTzVIpFnd44NhxmK/view?usp=sharing


## Getting started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. See deployment for notes on how to deploy the project on a live system.

### Prerequisites

What things you need to install the software and how to install them

```bash
dnf install wget
wget http://www.example.com/install.sh
bash install.sh
```

### Installing

A step by step series of examples that tell you how to get a development env running

Say what the step will be, for example

```bash
export TOKEN="fffd0923aa667c617a62f5A_fake_token754a2ad06cc9903543f1e85"
export EMAIL="jane@example.com"
dnf install npm
node samplefile.js
Server running at http://127.0.0.1:3000/
```

And repeat

```bash
curl localhost:3000
Thanks for looking at Code-and-Response!
```

End with an example of getting some data out of the system or using it for a little demo

## Running the tests

Explain how to run the automated tests for this system

### Break down into end to end tests

Explain what these tests test and why, if you were using something like `mocha` for instance

```bash
npm install mocha --save-dev
vi test/test.js
./node_modules/mocha/bin/mocha
```

### And coding style tests

Explain what these tests test and why, if you chose `eslint` for example

```bash
npm install eslint --save-dev
npx eslint --init
npx eslint sample-file.js
```

## Live demo

You can find a running system to test at 

OUR DEMO
( https://node-iot-msc.mybluemix.net/ui/#!/0?socketid=PfqILuXp8fdTqEbtAAAE/)


[callforcode.mybluemix.net](http://callforcode.mybluemix.net/)

## Built with

* [IBM Cloudant](https://cloud.ibm.com/catalog?search=cloudant#search_results) - The NoSQL database used
* [IBM Cloud Functions](https://cloud.ibm.com/catalog?search=cloud%20functions#search_results) - The compute platform for handing logic
* [IBM API Connect](https://cloud.ibm.com/catalog?search=api%20connect#search_results) - The web framework used
* [Dropwizard](http://www.dropwizard.io/1.0.2/docs/) - The web framework used
* [Maven](https://maven.apache.org/) - Dependency management
* [ROME](https://rometools.github.io/rome/) - Used to generate RSS Feeds

## Contributing

Please read [CONTRIBUTING.md](CONTRIBUTING.md) for details on our code of conduct, and the process for submitting pull requests to us.

## Versioning

We use [SemVer](http://semver.org/) for versioning. For the versions available, see the [tags on this repository](https://github.com/your/project/tags).

## Authors

* **Bill Chuong ** - *Initial work* - 

1) LINK WITH OUR PROJECT MANAGER 

Our Project Manager : Mr Bill Chuong ( Canada ) 

https://www.linkedin.com/in/bill-chuong-a8245236/

https://twitter.com/sumosumi04

2) LINK WITH OUR TEAMS 

Team Organization :

Team Leader :Senko Hao ( Viet Nam ) 

Support and Contribute by : Tony T ( Viet Nam ); Tom S, Christ Truong ( Canada) ; John W ( US)  

https://drive.google.com/file/d/179on4JEC9kA_pNWyP9k7egjjAoju98L9/view?usp=sharing

See also the list of [contributors](https://github.com/Code-and-Response/Project-Sample/graphs/contributors) who participated in this project.

## License

This project is licensed under the Apache 2 License - see the [LICENSE](LICENSE) file for details

## Acknowledgments

* 
* Based on [Billie Thompson's README template](https://gist.github.com/PurpleBooth/109311bb0361f32d87a2).
