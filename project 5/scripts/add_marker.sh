#!/bin/sh       

#source the workspace

xterm  -e  " source /opt/ros/kinetic/setup.bash; roscore" &
sleep 5


export TURTLEBOT3_MODEL=waffle



xterm  -e  "roslaunch turtlebot3_gazebo turtlebot3_world.launch" &
sleep 5


xterm  -e  "roslaunch turtlebot3_navigation turtlebot3_navigation.launch" &

sleep 5

xterm  -e  "rosrun add_markers add_markers_1"
