# IEEE Hardware Competition Codebase (2026)

This repository contains the code for our senior design project: the IEEE SoutheastCon 2026 Hardware Competition Robot.

The codebase is organized into three main components:

- **ground_robot/** – firmware and high-level software for the ground robot  
- **drone/** – code for the aerial subsystem  
- **tasks/** – logic for completing individual IEEE competition tasks  

---

## Branching Workflow

### main  
Stable, competition-ready code. This branch must always be safe to flash and run.

### dev  
Active development branch where new features are integrated.

**Team rule:**  
Pushes go to **dev** only. All changes must go through a Pull Request so the team can track and recover code if needed.

---

## **ground_robot/** – Ground Robot Code

Contains all microcontroller and high-level logic for the main robot platform.

### firmware/  
Microcontroller code (Arduino Mega): motor control, sensors, encoders, PWM, PID, etc.

### src/  
High-level logic such as line tracking, image processing, navigation, ROS2 nodes, and helper modules.

### tests/  
Hardware tests, debug utilities, tuning scripts, and subsystem verification.

Additional files (Testing.cpp, testpi.txt): early development tests.

---

## **drone/** – Aerial / UAV Code

### drone.cpp (template)  
Base module for drone control and communication.

### src/  
Reserved for future drone features (vision, positioning, task handling).

---

## **tasks/** – Competition Task Logic

### task.cpp (template)  
Central module for implementing IEEE task logic.

### src/  
Supporting modules for mission sequencing, scoring tasks, and multi-robot coordination.
