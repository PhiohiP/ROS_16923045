// navigator.cpp
#include <tugas1/navigator.hpp>

Navigator::Navigator(ros::NodeHandle& nh) : count(0) {
    drone_status_pub = nh.advertise<std_msgs::String>("/drone_status", 1000);
    drone_pos.x = 0;
    drone_pos.y = 0;
    drone_pos.z = 0;
    drone_status.data = "takeoff";
}

void Navigator::publishDroneStatus() {
    if (count < 1000) {
        if (drone_pos.x < 1000) {
            drone_pos.x += 1;
        } else {
            drone_pos.x = 0;
        }
        if (drone_pos.z < 10) {
            drone_pos.z += 1;
        } else {
            drone_pos.z = 0;
        }
        if (drone_pos.z == 10) {
            drone_status.data = "fly";
        } else if (drone_pos.z == 0) {
            drone_status.data = "land";
        }
        drone_status_pub.publish(drone_status);
        ros::Duration(1).sleep();
        count++;
    }
}