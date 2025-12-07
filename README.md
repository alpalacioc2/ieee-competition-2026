IEEE Hardware Competition Codebase

This repository contains the code for our senior design project — the IEEE Hardware Competition Robot (2026).
The codebase is organized into three major components:

ground_robot/ — firmware + high-level software for the ground robot

drone/ — code for the aerial/drone subsystem

tasks/ — logic for completing individual IEEE competition tasks

Branches

main
Stable / competition-ready code. This must always be safe to flash and run.

dev
Active development / integration branch where new features are tested.


Team agreed to push directly dev. All changes must go through a Pull Request that way we can recover code if needed.

Repo Layout
ground_robot/ — Ground Robot Code

Contains everything required for the main ground robot platform.

firmware/
Microcontroller code: motor control, encoders, sensors, PWM, PID loops.(Arduino Mega)

src/
High-level logic such as line-tracking, camera/image processing, navigation, ROS2 nodes, and helper libraries.

tests/
Debug utilities, hardware tests, and subsystem validation code.

Additional files (e.g., Testing.cpp, testpi.txt)
Early testing files used during development.

drone/ — Aerial / UAV Code

Contains the drone-side logic used for aerial tasks.

drone.cpp(template)
Base module for drone communication and control.

src/
Reserved for expanding drone features such as vision, positioning, and task handling.

tasks/ — Competition Task Logic

Contains code dedicated to specific IEEE competition behaviors.

task.cpp(template)
Central logic related to fulfilling competition tasks.

src/
Supporting modules for mission sequencing, scoring tasks, or multi-robot coordination.