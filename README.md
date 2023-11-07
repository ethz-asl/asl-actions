# asl-actions
Github Actions and documentation for ASL.

## Getting Started
First, you can start with the quick-start docs from GitHub: https://docs.github.com/en/actions/quickstart

Then you can follow along with a few simple tutorial workflows.

So far we have a simple example, which just checks out a Github repo containing one or more ROS packages and builds it within a default OSRF environment:

[Simple Example](https://github.com/ethz-asl/asl-actions/blob/main/.github/workflows/simple.yaml)

There is also an example of using the Github Container Registry to first build a custom docker image, push it to the container registry, and then use it in the following step to build the code itself:

[Docker Example](https://github.com/ethz-asl/asl-actions/blob/main/.github/workflows/docker.yaml)

