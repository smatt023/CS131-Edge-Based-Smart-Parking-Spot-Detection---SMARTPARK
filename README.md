# CS131-Edge-Based-Smart-Parking-Spot-Detection---SMARTPARK

Use Case

Problem:
A lot of times, finding a free parking spot can be frustrating and time-consuming. This is a common issue among UCR students as well, especially when trying to find parking in the lots. Often, during rush hours, drivers have to drive in circles, increasing fuel usage, carbon emissions, and traffic congestion.

This problem is ideal for edge computing because we need real-time decision-making that is able to function offline and with intermittent connectivity. There also needs to be fast responses so drivers can be informed accordingly about parking spots. Privacy-sensitive video processing  is also involved, and it is better to keep information locally on a device

Industry: 
This issue falls under the transportation and smart Infrastructure category. Currently, a lot of solutions depend on cloud connectivity or human intervention. This makes them unreliable or expensive. Our automated detection of available parking spots in real time will ensure minimal latency, low network load, and high reliability.

Challenges:

Some challenges that we might go through while developing the project include accurately detecting small vehicles or unusual parking angles, lighting such as night vs day, and syncing different devices. 

Solution 

Materials 
Jetson Nano 
Camera
MicroSD 
Power Supply
Ethernet Cable
Keyboard/Mouse
Monitor 
Laptop

Software 
Python 3
OpenCV
PyTorch
YOLOv5/ MobileNet

We propose SmartPark, a scalable and privacy-friendly smart parking system using Jetson Nano devices with cameras for real-time parking spot detection at the edge. The Jetson Nano will monitor a fixed number of parking spots via camera. Then, object detection modelsYOLOv5 or MobileNet, are used to determine if a spot is occupied or available. The videos are processed locally to protect user privacy and reduce network traffic. 

Long-term Full-Scale
To achieve a full-scale solution, we plan to deploy multiple edge devices across large parking spaces. Each edge device will process data locally and communicate with a central fog node. We can also add predictive analytics using AI to forecast spot availability based on trends. We can also possibly integrate payment or permit systems for billing and enforcement. 


Demo 
For our demo, we will record a short video showcasing our edge-based parking spot detection system in action using a small, indoor mock parking lot.
Demo Setup:
One Jetson Nano device connected to a USB camera
A physical mock parking lot setup using printed paper spots and toy cars
A monitor connected to display parking status in real time


What We’ll Show in the Video:
The Jetson Nano is capturing live video from the overhead camera
The object detection model (YOLOv5 or MobileNet) running on the Jetson, identifying parked cars
Real-time visualization of parking spot status (e.g., green = available, red = taken) on screen
The entire system works locally without a cloud or internet connection


Why a Recorded Demo:
Recording allows us to clearly explain and walk through each part of the system
It captures the model working in real-time and makes it easier to share or present
We can also show challenges like camera angle or lighting conditions during testing
This video will serve as our proof of concept and demonstrate that SmartPark works as an edge-based parking detection system using a single Jetson Nano.

Task Distribution

Task Distribution
Our system follows an edge-first architecture designed for scalability. We currently use only one Jetson Nano, but we have designed the system to support multiple layers (Edge → Fog → Cloud) in the future.
 Edge Layer (Jetson Nano)
Captures live video feed from USB camera
Runs lightweight object detection model (YOLOv5 or MobileNet) locally
Identifies which parking spots are occupied vs. available in real-time
Maps detected vehicles to parking zones using bounding box logic (OpenCV)
Displays spot status on a connected monitor (e.g., red = taken, green = open)
Performs all core logic locally for privacy, low latency, and offline capability


 Fog/Cloud Layer (Optional – for future scaling)
Collects summarized data from multiple Jetson devices (e.g., total free spots per zone)
Stores usage logs, generates heatmaps, and trends over time
Sends spot availability to a central dashboard or mobile app
Enables predictive analytics using historical parking data
(Not implemented in Phase 1, but planned for full-scale rollout)
