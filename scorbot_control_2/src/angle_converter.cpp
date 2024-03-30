#include <ros/ros.h>
#include "scorbot_control_2/angleConverter.h"
#include <math.h>

bool convert_radians_to_degrees(scorbot_control_2::angleConverter::Request &req,
                                scorbot_control_2::angleConverter::Response &res)
{
    res.scorbot_joint_1 = static_cast<int>(((req.scorbot_joint_1+(M_PI/2))*180)/M_PI);
    res.scorbot_joint_2 =  180-static_cast<int>(((req.scorbot_joint_2+(M_PI/2))*180)/M_PI);
    res.scorbot_joint_3 =  static_cast<int>(((req.scorbot_joint_3+(M_PI/2))*180)/M_PI);
    res.scorbot_joint_4 = static_cast<int>(((-req.scorbot_joint_4)*180)/(M_PI));
    return true; 
    res.scorbot_joint_5 = static_cast<int>(((-req.scorbot_joint_5)*180)/(M_PI));
    return true;
    res.scorbot_pad1_joint = static_cast<int>(((-req.scorbot_pad1_joint)*180)/(M_PI));
    return true;
}

bool convert_degrees_to_radians(scorbot_control_2::angleConverter::Request &req,
                                scorbot_control_2::angleConverter::Response &res)
{
    res.scorbot_joint_1 = static_cast<int>(((req.scorbot_joint_1+(M_PI/2))*180)/M_PI);
    res.scorbot_joint_2 =  180-static_cast<int>(((req.scorbot_joint_2+(M_PI/2))*180)/M_PI);
    res.scorbot_joint_3 =  static_cast<int>(((req.scorbot_joint_3+(M_PI/2))*180)/M_PI);
    res.scorbot_joint_4 = static_cast<int>(((-req.scorbot_joint_4)*180)/(M_PI));
    return true; 
    res.scorbot_joint_5 = static_cast<int>(((-req.scorbot_joint_5)*180)/(M_PI));
    return true;
    res.scorbot_pad1_joint = static_cast<int>(((-req.scorbot_pad1_joint)*180)/(M_PI));
    return true;
}

int main(int argc, char **argv)
{

    ros::init(argc, argv, "angles_converter");
    ros::NodeHandle n;
    ros::ServiceServer radians_to_degrees = n.advertiseService("radians_to_degrees", convert_radians_to_degrees);
    ros::ServiceServer degrees_to_radians = n.advertiseService( "degrees_to_radians", convert_degrees_to_radians);
    ros::spin();
    return 0;

}