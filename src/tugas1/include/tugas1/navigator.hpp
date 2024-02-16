// navigator.hpp

#ifndef TUGAS1_NAVIGATOR_HPP

#define TUGAS1_NAVIGATOR_HPP


#include <ros/ros.h>

#include <geometry_msgs/Point.h>

#include <std_msgs/String.h>


class Navigator {

public:

    Navigator(ros::NodeHandle& nh);

    void publishDroneStatus();

private:

    ros::Publisher drone_status_pub;

    geometry_msgs::Point drone_pos;

    std_msgs::String drone_status;

    int count;

};


#endif //TUGAS1_NAVIGATOR_HPP