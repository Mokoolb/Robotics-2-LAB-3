#include "Led.h" // include the LED library header file

Led::Led(int pin){ // constructor function that takes the pin number as an argument
  _pin = pin; // assign the pin number to the private _pin variable
}

void Led::init(){ // function to initialize the LED pin
  pinMode(_pin,OUTPUT); // set the LED pin as an output
}

void Led:: on(){ // function to turn on the LED
  digitalWrite(_pin,1); // set the LED pin HIGH (turn on the LED)
}

void Led:: off(){ // function to turn off the LED
  digitalWrite(_pin,0); // set the LED pin LOW (turn off the LED)
}
