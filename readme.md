# Irona Irona Irona !!!!!
[![License](https://img.shields.io/badge/License-BSD%203--Clause-blue.svg)](https://opensource.org/licenses/BSD-3-Clause)
[![Build Status](https://travis-ci.org/arunabaijal/not_irona.svg?branch=master)](https://travis-ci.org/arunabaijal/not_irona)
[![Coverage Status](https://coveralls.io/repos/github/arunabaijal/not_irona/badge.svg?branch=master)](https://coveralls.io/github/arunabaijal/not_irona?branch=master)
---
## Overview

This repository contains the implementation of the Irona bot. Irona bot is designed for fulfilling orders at ACME warehouse. We make use of [Tiago](http://wiki.ros.org/Robots/TIAGo) ground robot to scan the warehouse, identify orders to be picked up, and return to checkout. Tiago is a mobile manipulator with an arm along with several other components to assist picking and grasping of several shaped objects. The proposed package takes the map of the environment and the ArUco marker’s information associated with the package as the input and ultimately identifies the box and return to checkout.

We have simulated the environment in Gazebo with custom boxes we made and added the ArUco tags on all the sides of the boxes. For navigation purpose we have generated the cost map (using gmapping) of the environment that is required by Rviz. For detection purpose we are using the detection stack of the tiago bot. The demo video below demonstrate working of the module.

## Important Note
## Workflow Overview
## Personnel

Aruna Baijal: I am in my first semester of M.Engg. in Robotics at University of Maryland. My research interest lies in the field of computer vision. You can follow me on my [Linkedin](www.linkedin.com/in/arunabaijal).

Arjun Gupta: I am in my first semester of M.Engg. in Robotics at University of Maryland. My research interest lies in the field of computer vision. You can follow me on my [Linkedin](https://www.linkedin.com/in/arjung27/).

Kartik Madhira: I am in my third semester of M.Engg. in Robotics at University of Maryland. My research interest lies in the field of perception and planning. You can follow me on my [Linkedin](https://www.linkedin.com/in/kartik-madhira-aa1555115/).

## Product Backlog 
[![Packagist](https://img.shields.io/badge/AIP-Backlog-orange)](https://docs.google.com/spreadsheets/d/1VPSi_rlRrJmCR6A3MWS8m1NzFee9nrs-7Fvtm07FDjw/edit?usp=sharing)
[![Packagist](https://img.shields.io/badge/AIP-Sprint-brightgreen)](https://docs.google.com/document/d/1W-qpNAWPG2eSJVatFzp8255uD5t4aVNCYX3F4T-HzEI/edit)

## Dependencies
To build this module, the following dependecies should be met:

- CMake version at least 3.5.1
- Google Test: Unit test requires gtest framework by Google

## Build package
## Run Demo
## Running Tests
## Building for code coverage 
```
sudo apt-get install lcov
cmake -D COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug ../
make
make code_coverage
```
## Doxygen
To install Doxygen, 
```
sudo apt install doxygen
```
To generate the Doxygen documentation 
```
doxygen ./Doxygen
```
## License

```
MIT License

Copyright (c) 2019 Kartik Madhira, Arjun Gupta, Aruna Baijal

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
```
