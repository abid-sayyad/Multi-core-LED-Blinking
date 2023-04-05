# Raspberry Pi Pico C++ SDK Blinking LEDs
This repository contains a simple C++ code that blinks two LEDs connected to the Raspberry Pi Pico board in parallel, one with an interval of 2 seconds and the other with an interval of 5 seconds.

## Prerequisites
To run this code on your Raspberry Pi Pico board, you need:

- Raspberry Pi Pico board
- C++ SDK for Raspberry Pi Pico
- Two LEDs and appropriate resistors
- Breadboard and jumper wires
## Wiring Diagram

![WhatsApp Image 2023-04-05 at 08 26 05](https://user-images.githubusercontent.com/49099853/229969767-664f8f8c-4248-4f0f-9ef4-6d8b37acef42.jpg)


## Usage
- Clone this repository to your local machine.
- Connect two LEDs to ` GPIO 25 ` and ` GPIO 1 ` with appropriate resistors.
- Connect your Raspberry Pi Pico board to your computer in the ` Bootsel ` mode via USB.
- Build the code by running ` mkdir build && cd build && cmake .. && make ` in the terminal.
- Flash the generated ` blinking_leds.uf2 ` file to your Raspberry Pi Pico board.
- Watch the LEDs blink in parallel.
## Demo Video


https://user-images.githubusercontent.com/49099853/229970812-4828c9a2-5ca5-4d63-be58-9bfa961055a7.mp4


## License
This code is licensed under the MIT license. See the LICENSE file for details.
