#!/bin/sh

#============== NOTE ==========
#xterm  -e  " source /opt/ros/melodic/setup.bash; roscore" &
#sleep 5


export TURTLEBOT3_MODEL=waffle

# then the following are already sourced in my personal Linux installation (change names according to your pc)

        xterm  -e  " source /opt/ros/kinetic/setup.bash; roscore" &
        sleep 5
#	source /opt/ros/melodic/setup.bash
#	source /path/to/catkin_ws/devel/setup.bash

xterm  -e  "roslaunch turtlebot3_gazebo turtlebot3_world.launch" &
sleep 5


xterm -e "roslaunch turtlebot3_slam turtlebot3_slam.launch slam_methods:=gmapping" &
#xterm  -e  "roslaunch turtlebot_gazebo gmapping_demo.launch" & 
sleep 5

# VIEW_NAVIGATION: observe map in Rviz
#xterm  -e  "roslaunch turtlebot_rviz_launchers view_navigation.launch" &
#xterm  -e  "roslaunch turtlebot3_gazebo turtlebot3_gazebo_rviz.launch" &
#sleep 5

# teleop: operating robot using keyboard
xterm -e "roslaunch turtlebot3_teleop turtlebot3_teleop_key.launch"



