# PinInit

A library for initializing digital pins with different modes on an Arduino board.

## Description

This library provides an easy and efficient way to initialize digital pins with different modes (input, output, or input_pullup) on an Arduino board. It uses a variadic template and recursive function calls to initialize an arbitrary number of pins with specified modes.

## Usage

Here is an example of how to use PinInit:

``` C++
#include <PinInit.h>

#define LED_PIN 13

#define BUTTON_1 2
#define BUTTON_2 3
#define BUTTON_3 4

#define BUTTON_4 5

void setup() {
  PinInit(
    output, LED_PIN,
    input_pullup, BUTTON_1, BUTTON_2, BUTTON_3,
    input, BUTTON_4
  );
}

void loop() {
  // Your code here
}
```
