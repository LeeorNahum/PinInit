#ifndef PININIT_H
#define PININIT_H

#include <Arduino.h>
#include <stdint.h>

enum PinMode {input, output, input_pullup};

class PinInit {
  public:
    template <typename... PinModesAndPins>
    PinInit(PinModesAndPins... callbacks_and_types);
    
  private:
    template <typename... PinModesAndPins>
    void initializePins(PinMode pin_mode, uint8_t pin, PinModesAndPins... callbacks_and_types);
    template <typename... PinModesAndPins>
    void initializePins(PinMode pin_mode, PinMode new_pin_mode, PinModesAndPins... callbacks_and_types);
    void initializePins(PinMode pin_mode);
};

#include "PinInit.tpp"

#endif