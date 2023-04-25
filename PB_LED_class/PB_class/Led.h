#include "Arduino.h" // include the Arduino core library header file

#ifndef LED_H // if the LED_H constant is not defined
#define LED_H // define LED_H

class Led{ // create a class called Led
  private: // private access specifier
  int _pin; // private variable to store the LED pin number
  public: // public access specifier
  Led(int pin); // constructor function that takes the LED pin number as an argument
  void init(); // function to initialize the LED pin as an output
  void on(); // function to turn on the LED
  void off(); // function to turn off the LED
};

#endif // end of LED_H constant definition
