# PID Project - Self Driving Cars Engineer - UDACITY - 2017

##  --> This file content all the steps to complete the PID Project <--

## Development Environment:
* MacBook Pro - 2,7 Ghz i7 - High Sierra
* Xcode 

## 1.PID Controller 

The PID controller is a process control technique that uses the proporcional, integral and derivative action to minimize the error in
a process. 

The proporcional action produce a signal proporcional to the output error being Kp the proporcional gain. In the project, the proporcional
gain set up how fast the car react , given the CTE error , to changes in direction. The problem is that the proporcional gain Kp can makes the
car oscilate around the CTE error.

To compesate this was used the derivative gain Kd to react against the oscilations and to prevent the car to loose control. 

Finnaly, was set up the integral gain, to minimize the error around CTE.

## 2. PID Tunning 

The PID was tunned manually , starting by the Kp tunning, until the oscilations reach a critical value, close to loose control. From these point 
was tunned Kd until the oscilation was acceptable , and then Ki, until the error around CTE was minimize to prevent the car to run out of the track.





