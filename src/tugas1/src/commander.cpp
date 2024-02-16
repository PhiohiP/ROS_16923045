// commander.cpp

#include <tugas1/commander.hpp>


Commander::Commander(ros::NodeHandle& nh) {

    drone_status_sub = nh.subscribe("/drone_status", 1000, &Commander::droneStatusCallback, this);

}


void Commander::droneStatusCallback(const std_msgs::String::ConstPtr& msg) {

    ROS_INFO("Drone Status: %s", msg->data.c_str());

}