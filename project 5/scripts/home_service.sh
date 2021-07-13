#!/bin/sh


# Please do source the workspace first 

export TURTLEBOT3_MODEL=waffle


xterm -e " roslaunch turtlebot3_gazebo turtlebot3_world.launch " &

sleep 5

xterm -e " roslaunch turtlebot3_navigation turtlebot3_navigation.launch " &

sleep 10

xterm -e " rosrun pick_objects pick_objects " &

xterm -e " rosrun add_markers add_markers "
