# IEEE Hardware Competition Codebase

This repository contains the code for our IEEE hardware competition robot.

## Branches
- `main`  
  Stable / competition-ready code. This should always be safe to flash/run.
- `dev`  
  Active development / integration branch. New work gets merged here first.
- feature branches  
  Personal work branches created from `dev` (example: `feature/motor-driver`).

You are **not allowed** to push directly to `main` or `dev`. You must use a Pull Request.

## Repo layout
- `firmware/`  
  Code that runs on the microcontroller. Motor control, sensors, encoders, PID, etc.
- `tests/`  
  Test code, debug utilities, temporary tuning scripts, etc.

(More folders like `high_level/` for Raspberry Pi/vision code can be added later.)

## Workflow to add code
1. Make sure you're on your local `dev`:
   ```bash
   git checkout dev
   git pull origin dev

