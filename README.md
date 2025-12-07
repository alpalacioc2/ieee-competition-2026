IEEE Hardware Competition Codebase (2026)

This repository contains the software stack for our senior design project — the IEEE SoutheastCon 2026 Hardware Competition Robot.
The codebase is organized into three major components:

ground_robot/ — firmware + high-level software for the ground robot

drone/ — logic for the aerial subsystem

tasks/ — implementations for individual IEEE competition tasks

Branching Workflow
main

Stable, competition-ready code.
This branch must always be safe to flash and run on hardware.

dev

Active development and integration branch.
New features are merged here before they are considered stable.

Team Rule: Pushes go to dev only. All changes must be made through a Pull Request so the team can track changes, review code, and recover previous versions if needed.

Repository Layout
ground_robot/ — Ground Robot Code

Contains all low-level and high-level software for the main robot platform.

firmware/

Microcontroller (Arduino Mega) firmware, including:

Motor control

Encoders

Sensors & input modules

PWM generation

PID control loops

src/

High-level control logic such as:

Line-tracking algorithms

Camera / image-processing modules

Navigation logic

ROS2 nodes

Utility/helper libraries

tests/

Used for hardware validation and debugging:

Motor & sensor tests

Prototype behavior scripts

Temporary subsystem evaluation code

Additional files such as Testing.cpp or testpi.txt represent early development experiments.

drone/ — Aerial / UAV Subsystem

Contains the drone-side logic used for aerial support tasks.

drone.cpp (template) — Base module for UAV communication and control

src/ — Space reserved for future features such as onboard vision, pose estimation, or task handling

tasks/ — Competition Task Logic

Implements code that performs specific IEEE competition tasks.

task.cpp (template) — Core logic for interacting with task objectives

src/ — Supporting modules for mission sequencing, scoring, or multi-robot coordination
