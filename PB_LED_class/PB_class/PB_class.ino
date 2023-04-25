/*
 * Overall, this code is an example of simple state machine programming, 
 * where the state of the system (in this case, which LED should be on) is determined by the value of a variable (x) 
 * that is updated based on user input (pressing a button).
 */
 
#include "Pb.h" // include the Pushbutton library
#include "Led.h" // include the LED library

Pb button(9,1); // create a pushbutton object connected to pin 9 with a pull-up resistor
Led blue(3); // create an LED object connected to pin 3
Led aqua(4); // create an LED object connected to pin 4
Led green(5); // create an LED object connected to pin 5
Led red(6); // create an LED object connected to pin 6

int button_state; // variable to store the state of the pushbutton (0 or 1)
int x; // variable to store the current state of the system (which LED should be on)
int previous_x; // variable to store the previous state of the system (used to detect button presses)

void setup() {
  button.init(); // initialize the pushbutton object
  blue.init(); // initialize the blue LED object
  aqua.init(); // initialize the aqua LED object
  green.init(); // initialize the green LED object
  red.init(); // initialize the red LED object
  Serial.begin(9600); // start serial communication at 9600 baud
}

void loop() {
  button_state = button.ispressed(); // read the state of the pushbutton
  
  if(button_state == 1 && previous_x == 0){ // if the button is pressed and was not previously pressed
    x += 1; // increment the state variable
  }
  
  previous_x = button_state; // update the previous button state variable
  
  if(x > 4){ // if the state variable exceeds the maximum state
    x = 1; // reset the state variable to the minimum state
  }
  
  if(x == 1){ // if the state variable is 1
    blue.on(); // turn on the blue LED
    aqua.off(); // turn off the aqua LED
    green.off(); // turn off the green LED
    red.off(); // turn off the red LED
  }
  
  if(x == 2){ // if the state variable is 2
    blue.off(); // turn off the blue LED
    aqua.on(); // turn on the aqua LED
    green.off(); // turn off the green LED
    red.off(); // turn off the red LED
  }
  
  if(x == 3){ // if the state variable is 3
    blue.off(); // turn off the blue LED
    aqua.off(); // turn off the aqua LED
    green.on(); // turn on the green LED
    red.off(); // turn off the red LED
  }
  
  if(x == 4){ // if the state variable is 4
    blue.off(); // turn off the blue LED
    aqua.off(); // turn off the aqua LED
    green.off(); // turn off the green LED
    red.on(); // turn on the red LED
  }
}
