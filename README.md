# Scorbot Hardware Interface

This project is a continuation of 'Project Cali' a mobile manipulator designed by studnets and staff of California State University Los Angeles (CSULA), and the members of the student organization 'American Society of Mechanical Engineers (ASME). Link: https://github.com/ASME-ground-robot/robot_cali. This platform is intended for reasearch, educational purposes, as well as design competitions. If you would like to read more about the overal project feel free to click on the link provided. I took part in development starting in May 2022, where I acted as a research assistant for a graduate level research. I then led further development of 'Project Cali' as a 'Project Lead' from September 2022 - May 2023.

![Rover_Urc](https://github.com/JovanLukic79/scorbot_control_2/assets/115774118/f26800ed-8741-468d-a514-e1811fa5fde4)


This repo describes one of my particular contribution of the overall platform which is to provide a control scheme for the 6-link robotic arm integrated onto the overall platform. ROS's 'MoveIt' package was used to provide the control system, and GUI needed for robotic arm manipulation. ROS version that was used is ROS melodic. With that said, this package provides the code needed to interface ros_control and controllers with any sort of embedded controls. Later I may provide an example of said emedded controls just to demonstrate how this package would communicate with a set of hardware controls to acheive joint articulation. For now, I will just provide this part of the system for anyone who needs it as well as to use as my personal portfolio. This package can also be configured to any general robotic arm, so if you happen to need to interface your hardware controls with ROS's control system, feel free to use this as a template. With that said, a description of this package is provided bellow.


![IMG_1666](https://github.com/JovanLukic79/scorbot_control_2/assets/115774118/0d4ebff5-e54c-4485-bf71-09ed5fdbdc6d)

## Description

This repo is made up of two packages. The first one is "scorbot_control_2". This package is where I defined my hardware interface for the robotic arm. In addition to that,"scorbot_control_2" consists of the robotic arm simulation pacakge named "gazebo.launch". The second package is "scorbot_moveit_2", was built using "moveit_setup_assistants". This contains "move_group.launch" the main node needed to communicate with the rest of ROS's control system. In addition to movegroup, this package would also provide moveit_rviz.launch file which woutld act as the main GUI needed to control your robotic arm. 


## Scorbot Hardeare Interface (Controller.launch)
```
cd catkin_ws
```
```
source devel/setup.bash
```
```
roslaunch scorbot_control_2 controller.launch
```
## Getting Started

### Dependencies

* Describe any prerequisites, libraries, OS version, etc., needed before installing program.
* ex. Windows 10

### Installing

* How/where to download your program
* Any modifications needed to be made to files/folders

### Executing program

* How to run the program
* Step-by-step bullets
```
code blocks for commands
```

## Help

Any advise for common problems or issues.
```
command to run if program contains helper info
```

## Authors

Contributors names and contact info

ex. Dominique Pizzie  
ex. [@DomPizzie](https://twitter.com/dompizzie)

## Version History

* 0.2
    * Various bug fixes and optimizations
    * See [commit change]() or See [release history]()
* 0.1
    * Initial Release

## License

This project is licensed under the [NAME HERE] License - see the LICENSE.md file for details

## Acknowledgments

Inspiration, code snippets, etc.
* [awesome-readme](https://github.com/matiassingers/awesome-readme)
* [PurpleBooth](https://gist.github.com/PurpleBooth/109311bb0361f32d87a2)
* [dbader](https://github.com/dbader/readme-template)
* [zenorocha](https://gist.github.com/zenorocha/4526327)
* [fvcproductions](https://gist.github.com/fvcproductions/1bfc2d4aecb01a834b46)
