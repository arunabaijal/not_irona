# Irona Irona Irona !!!!!
[![License](https://img.shields.io/badge/License-BSD%203--Clause-blue.svg)](https://opensource.org/licenses/BSD-3-Clause)
[![Build Status](https://travis-ci.org/arunabaijal/not_irona.svg?branch=master)](https://travis-ci.org/arunabaijal/not_irona)
[![Coverage Status](https://coveralls.io/repos/github/arunabaijal/not_irona/badge.svg?branch=master)](https://coveralls.io/github/arunabaijal/not_irona?branch=master)
---
## Overview

This repository contains the implementation of the Irona bot. Irona bot is designed for fulfilling orders at ACME warehouse. We make use of [Tiago](http://wiki.ros.org/Robots/TIAGo) ground robot to scan the warehouse, identify orders to be picked up, and return to checkout. Tiago is a mobile manipulator with an arm along with several other components to assist picking and grasping of several shaped objects. The proposed package takes the map of the environment and the ArUco marker’s information associated with the package as the input and ultimately identifies the box and return to checkout.

We have simulated the environment in Gazebo with custom boxes we made and added the ArUco tags on all the sides of the boxes. For navigation purpose we generated the cost map (using gmapping) of the environment that is needed for Rviz. The demo video below demonstrate working of the module. 
