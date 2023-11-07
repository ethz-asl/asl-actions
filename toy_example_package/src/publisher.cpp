#include <ros/ros.h>
#include <std_msgs/String.h>

#include <sstream>

// All this code is from the publisher tutorial:
// https://wiki.ros.org/ROS/Tutorials/WritingPublisherSubscriber%28c%2B%2B%29
int main(int argc, char **argv) {
  ros::init(argc, argv, "toy_example_publisher");

  ros::NodeHandle nh, nh_private("~");

  ros::Publisher pub = nh_private.advertise<std_msgs::String>("hello", 1);

  ros::Rate loop_rate(10);  // Hz

  int count = 0;
  while (ros::ok()) {
    std_msgs::String msg;

    std::stringstream ss;
    ss << "hello world " << count;
    msg.data = ss.str();

    ROS_INFO("%s", msg.data.c_str());

    pub.publish(msg);

    ros::spinOnce();

    loop_rate.sleep();
    ++count;
  }

  return 0;
}
