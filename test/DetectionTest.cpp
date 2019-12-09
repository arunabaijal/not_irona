/******************************************************************************
 *  MIT License
 *
 *  Copyright (c) 2019 Kartik Madhira, Aruna Baijal, Arjun Gupta
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a copy
 *  of this software and associated documentation files (the "Software"), to deal
 *  in the Software without restriction, including without limitation the rights
 *  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *  copies of the Software, and to permit persons to whom the Software is
 *  furnished to do so, subject to the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included in all
 *  copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 *  SOFTWARE.
 *******************************************************************************/

/**
 * @file      DectectionTest.cpp
 * @author    Kartik Madhira
 * @author    Arjun Gupta
 * @author    Aruna Baijal
 * @copyright MIT License (c) 2019 Kartik Madhira, Aruna Baijal, Arjun Gupta
 * @brief     Unit test for Detection class
 */

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <Detection.hpp>
#include <ros/ros.h>

TEST(DetectionTest, shouldDetect) {
  //ros::NodeHandle nh;
  Detection classUnderTest;
  std_msgs::Bool obj;
  obj.data = true;
  std_msgs::Bool::ConstPtr value(new std_msgs::Bool());
  //std_msgs::Bool::ConstPtr* value = obj;
  //value->data = true;
  //goal_pose.set();
  classUnderTest.detectionCallback(value);
  classUnderTest.setTagDetected(obj);
  ASSERT_TRUE(classUnderTest.getTagDetected().data);
}

/*TEST(navigationTest, shouldReachGoal) {
  EXPECT_NO_FATAL_FAILURE(Navigation nav);
}*/