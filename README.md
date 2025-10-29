# IEEE Hardware Competition Codebase

This repository contains the production code for our IEEE hardware competition robot.

The `main` branch is considered **stable**:
- Code here should be safe to flash/run on the physical robot.
- This is the version we would use in competition or demo.

All active development happens in other branches, not here.

---

## Branches and workflow

### `main`
- Stable, competition-ready code.
- Protected branch: you cannot push here directly.
- Only updated by merging in tested code from `dev`.

### `dev`
- Integration branch.
- New features land here first.
- After we test `dev` on the actual robot and confirm it works (motors, sensors, control loop, no brownouts), we merge `dev` → `main`.

### Feature branches
- Individual work branches created from `dev`. Examples:
  - `feature/motor-driver`
  - `feature/line-follow`
  - `fix/encoder-scaling`
- You do your coding in your feature branch, then open a Pull Request into `dev`.

**Important:**  
Nobody writes new code directly in `main`.  
Nobody pushes directly to `main` or `dev`.  
Everything goes through Pull Requests.

---

## Repository layout

```text
firmware/
    Low-level code that runs on the microcontroller(s).
    Motor PWM, encoder reading, sensor input, interrupts, PID, etc.

tests/
    Small programs, scripts, or throwaway code for debugging hardware,
    tuning control loops, verifying sensors, etc.

