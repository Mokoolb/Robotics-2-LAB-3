#include "Arduino.h" // include the Arduino core library header file

#ifndef PB_H // if the PB_H constant is not defined
#define PB_H // define PB_H

class Pb{ // create a class called Pb
  private: // private access specifier
  int pin; // private variable to store the button pin number
  int state; // private variable to store the button state
  int pulldown = false; // private variable to store the button input type
  public: // public access specifier
  Pb(int pin, int input_type); // constructor function that takes the button pin number and input type as arguments
  int ispressed(); // function to check if the button is pressed
  void init(); // function to initialize the button pin
};

#endif // end of PB_H constant definition
