// navigatorNode.cpp

#include <ros/ros.h>

#include <tugas1/navigator.hpp>

int main(int argc, char** argv) {

    ros::init(argc, argv, "navigator_node");

    ros::NodeHandle nh;

    Navigator navigator(nh);

    ros::Rate rate(1);

    while (ros::ok()) {

        navigator.publishDroneStatus();

        rate.sleep();

    }

    return 0;

}