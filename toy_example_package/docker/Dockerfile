FROM osrf/ros:noetic-desktop

# Install catkin tools.
RUN apt-get -qq update && \
  apt-get install -y python3-catkin-tools python3-vcstool python3-pip \
  python-is-python3 && \
  rm -rf /var/lib/apt/lists/*

