cmake_minimum_required(VERSION 3.0.2)
project(nikolaus)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  geometry_msgs
  turtlesim
)

catkin_package()

include_directories(
  ${catkin_INCLUDE_DIRS}
)

add_executable(hello_world_node src/hello_world.cpp)
target_link_libraries(hello_world_node ${catkin_LIBRARIES})

add_executable(circle_node src/circle.cpp)
target_link_libraries(circle_node ${catkin_LIBRARIES})

add_executable(house_one_stroke_node src/house_one_stroke.cpp)
target_link_libraries(house_one_stroke_node ${catkin_LIBRARIES})
