#include "ros/ros.h"
#include "geometry_msgs/Twist.h"

int main(int argc, char** argv)
{
  ros::init(argc, argv, "circle");
  ros::NodeHandle nh;

  ros::Publisher cmd_pub = nh.advertise<geometry_msgs::Twist>("turtle1/cmd_vel", 10);
  ros::Rate rate(10);

  geometry_msgs::Twist msg;
  msg.linear.x = 1.0;   // forward speed
  msg.angular.z = 1.0;  // rotation speed

  while (ros::ok())
  {
    cmd_pub.publish(msg);
    ros::spinOnce();
    rate.sleep();
  }
  return 0;
}
