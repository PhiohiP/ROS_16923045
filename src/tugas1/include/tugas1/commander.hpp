// commander.hpp

#ifndef TUGAS1_COMMANDER_HPP

#define TUGAS1_COMMANDER_HPP


#include <ros/ros.h>

#include <geometry_msgs/Point.h>

#include <std_msgs/String.h>


class Commander {

public:

    Commander(ros::NodeHandle& nh);

    void droneStatusCallback(const std_msgs::String::ConstPtr& msg);

private:

    ros::Subscriber drone_status_sub;

};


#endif //TUGAS1_COMMANDER_HPP