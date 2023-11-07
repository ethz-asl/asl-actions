cmake_minimum_required(VERSION 3.0.2)
project(toy_example_package)

add_compile_options(-std=c++11)

find_package(catkin REQUIRED COMPONENTS roscpp std_msgs)
catkin_package(
  CATKIN_DEPENDS std_msgs roscpp
)

include_directories(include ${catkin_INCLUDE_DIRS})

add_executable(publisher_node src/publisher.cpp)
add_dependencies(publisher_node ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(publisher_node
  ${catkin_LIBRARIES}
)


