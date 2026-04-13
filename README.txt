# nikolaus (ROS 1 package)

## Nodes included:
- hello_world_node
- circle_node
- house_one_stroke_node

## Build instructions:
cd ~/catkin_ws
catkin_make
source devel/setup.bash

## Run instructions (each in a new terminal):
1. roscore
2. rosrun turtlesim turtlesim_node
3. rosrun nikolaus hello_world_node
4. rosrun nikolaus circle_node
5. rosservice call /reset
6. rosrun nikolaus house_one_stroke_node
