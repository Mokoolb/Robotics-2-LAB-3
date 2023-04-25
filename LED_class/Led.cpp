// Include the Led.h library for the Led class
#include "Led.h"

// Constructor for the Led class that takes a pin number as a parameter
Led::Led(int pin){
  // Set the value of the _pin variable to the pin parameter
  _pin = pin;
}

// Initialization function that sets the pin mode of the LED pin to OUTPUT
void Led::init(){
  pinMode(_pin,OUTPUT);
}

// Turn on the LED by setting the pin to HIGH
void Led::on(){
  digitalWrite(_pin,1);
}

// Turn off the LED by setting the pin to LOW
void Led::off(){
  digitalWrite(_pin,0);
}
