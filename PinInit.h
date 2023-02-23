#ifndef PININIT_H
#define PININIT_H

#include <Arduino.h>
#include <stdint.h>

enum PinMode {input, output, input_pullup};

template <typename... PinModesAndPins>
void PinInit(PinModesAndPins... callbacks_and_types) {
  PinInit PinInitialize(callbacks_and_types);
}

class PinInitialize {
  public:
    template <typename... PinModesAndPins>
    PinInitialize(PinModesAndPins... callbacks_and_types);
    
  private:
    template <typename... PinModesAndPins>
    void initializePins(PinMode pin_mode, uint8_t pin, PinModesAndPins... callbacks_and_types);
    template <typename... PinModesAndPins>
    void initializePins(PinMode pin_mode, PinMode new_pin_mode, PinModesAndPins... callbacks_and_types);
    void initializePins(PinMode pin_mode);
};

#include "PinInit.tpp"

#endif