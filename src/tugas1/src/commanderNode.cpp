// commanderNode.cpp

#include <ros/ros.h>

#include <tugas1/commander.hpp>


int main(int argc, char** argv) {

    ros::init(argc, argv, "commander_node");

    ros::NodeHandle nh;

    Commander commander(nh);

    ros::spin();

    return 0;

}
