/*
 *  It uses a library called "Pb" to interface with a pushbutton connected 
 *  to pin 5 of the board. In the setup() function, the button object is initialized. 
 *  In the loop() function, the current state of the button is read and stored in the 
 *  button_state variable.
 */
#include "Pb.h" // includes the header file for the "Pb" library

Pb button(5); // creates a new button object on pin 5
int button_state; // declares a variable to store the button's state

void setup() {
  button.init(); // initializes the button object
}

void loop() {
  button_state = button.status(); // reads the current state of the button
}
