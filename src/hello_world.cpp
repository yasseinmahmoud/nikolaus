#include "ros/ros.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "hello_world");
  ros::NodeHandle nh;

  ROS_INFO("Hello World, this is <your names here>");

  ros::spin();
  return 0;
}
