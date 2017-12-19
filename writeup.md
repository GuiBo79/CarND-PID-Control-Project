# PID Project - Self Driving Cars Engineer - UDACITY - 2017

##  --> This file content all the steps to complete the PID Project <--

## Development Environment:
* MacBook Pro - 2,7 Ghz i7 - High Sierra
* Xcode 

## 1.PID Controller 

The PID controller is a process control technique that uses the proportional, integral and derivative action to minimize the error in
a process. 

The proportional action produces a signal proportional to the output error being Kp the proporcional gain. In the project, the proportional
gain set up how fast the car react , given the CTE error , to changes in direction. The problem is that the proporcional gain Kp can makes the
car oscillate around the CTE error.

To compensate this was used the derivative gain Kd to react against the oscillations and to prevent the car to loose control. 

Finally, was set up the integral gain, to minimize the error around CTE.

## 2. PID Tuning 

The PID was tuned manually , starting by the Kp tuning, until the oscillations reach a critical value, close to loose control. From these point 
was tuned Kd until the oscilation was acceptable , and then Ki, until the error around CTE was minimized to prevent the car to run out of the track.

## 3. Small Video

In this video we can check the car behavior after the PID controller was tuned.








