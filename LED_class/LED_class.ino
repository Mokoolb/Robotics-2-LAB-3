/*
 * This is a simple Arduino sketch that blinks an LED connected to pin 3 on the board using the Led.h library.
 */
// Include the Led.h library to control the LED
#include "Led.h"

// Declare a new Led object called "blue" connected to pin 3
Led blue(3);

// Declare a variable for the button state (not used in this code)
int button_state;

void setup() {
  // Initialize the LED
  blue.init();
}

void loop() {
  // Turn the LED on
  blue.on();
  // Wait for 100 milliseconds
  delay(100);
  // Turn the LED off
  blue.off();
  // Wait for another 100 milliseconds
  delay(100);
}
