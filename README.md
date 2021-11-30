# Udacity - Robotics Software engineer nanodegree program 

Submission of project 1 - Build my World

 
* In this Project I used all the knowledge provided to me in all the previous projects including SLAM, mapping, and everything. In this we used all the knowldege to make home service project in which we pick a object from one place and drop it in the another position.
* For completing the project I took the help of the turtlebot3 package(with some changes in it) along with the other nodes written by me.
* For localization, amcl package was used which was already in the turtlebot3_navigation package and for mapping slam_gmapping package was used.
* The ROS navigation stack creates a path for our robot based on Dijkstra's algorithm, a variant of the Uniform Cost Search algorithm, while avoiding obstacles on its path.
* To run the launch files and other files in a more efficient way, I used the script files which used xterm, which is to be installed first before using them in the laptop.
* Package named pick_objects was made in order to move the robot to the desired positon in the world using a cpp program.
* Another package add_markers was made to add virtual objects in the rviz so as to perform the task of home service in which object is to be picked and place at another position.

Submission of Final Project of the Udacity NanoDegree Program


The final project of the Udacity Robotics Nanodegree incorporates a number of elements from previous projects, rolling them into a single solution that would actually be required to engineer a home service robot:

* Build a simulated map using Gazebo building editor
* Build a map of the environment using gmapping and teleop.
* Use Adaptive Monte Carlo Localisation to detect the robot position within the known map.
* Use the ROS move_base library to plot a path to a target pose and navigate to it.* 
* Write a custom node to encompass the path planning and driving libraries, listening for goal poses.
* Write a custom node to publish goal poses for the robot, then compare these to the actual pose (odometry topic) to determine success.


# Installation
This repository is intended to run only on Linux Ubuntu v16.04 with ROS Kinetic. Create a Catkin Workspace if you have not already done so, as explained here ((here)[http://wiki.ros.org/catkin/Tutorials/create_a_workspace]).

To install, clone the repository to /home/workspace. The command below will pull all required submodules and copy directly to Catkin Workspace. git clone --recurse-submodules https://github.com/aarishjain28/project_1 .

Once all the necessary files are in place, run the following commands from the catkin_ws directory:
