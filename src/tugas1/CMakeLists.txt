cmake_minimum_required(VERSION 2.8.3)
project(tugas1)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
)

catkin_package(
  INCLUDE_DIRS include
  LIBRARIES tugas1
  CATKIN_DEPENDS roscpp std_msgs
)

include_directories(
  ${catkin_INCLUDE_DIRS}
  ${catkin_LIBRARY_DIRS}
  include
)

add_executable(commander_node src/commanderNode.cpp)
target_link_libraries(commander_node tugas1)
add_dependencies(commander_node tugas1_generate_messages_cpp)

add_executable(navigator_node src/navigatorNode.cpp)
target_link_libraries(navigator_node tugas1)
add_dependencies(navigator_node tugas1_generate_messages_cpp)

link_directories(${catkin_LIBRARY_DIRS})