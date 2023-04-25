// Include the Arduino core library for the code to compile
#include "Arduino.h"

// Check if the header file has been included before
#ifndef LED_H
#define LED_H

// Declare a class called Led for controlling an LED
class Led{
  private:
    int _pin; // variable to store the pin number of the LED
  public:
    Led(int pin); // constructor that takes a pin number as a parameter
    void init(); // function to initialize the LED pin as output
    void on(); // function to turn on the LED
    void off(); // function to turn off the LED
};

// End of the if statement for checking if the header file has been included
#endif
