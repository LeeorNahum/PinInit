template <typename... PinModesAndPins>
PinInit::PinInit(PinModesAndPins... callbacks_and_types) {
  this->initializePins(callbacks_and_types...);
}

template <typename... PinModesAndPins>
void PinInit::initializePins(PinMode pin_mode, uint8_t pin, PinModesAndPins... callbacks_and_types) {
  switch (pin_mode) {
    case input:
      pinMode(pin, INPUT);
      break;
    case output:
      pinMode(pin, OUTPUT);
      break;
    case input_pullup:
      pinMode(pin, INPUT_PULLUP);
      break;
  }
  this->initializePins(pin_mode, callbacks_and_types...);
}

template <typename... PinModesAndPins>
void PinInit::initializePins(PinMode pin_mode, PinMode new_pin_mode, PinModesAndPins... callbacks_and_types) {
  return this->initializePins(new_pin_mode, callbacks_and_types...);
}

void PinInit::initializePins(PinMode pin_mode) {
  return;
}