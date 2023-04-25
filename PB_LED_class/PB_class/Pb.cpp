#include "Pb.h" // include the Pb library header file

Pb::Pb(int pin, int input_type){ // constructor function that takes the pin number and input type as arguments
  this->pin = pin; // assign the pin number to the private "pin" variable
  if(input_type == 1){ // if the input type is 1
    int pulldown = false; // set the pulldown variable to false
  }
  if(input_type == 2){ // if the input type is 2
    int pulldown = true; // set the pulldown variable to true
  }
}

int Pb::ispressed(){ // function to check if the button is pressed
  if(pulldown = true){ // if the input type is pulldown
    state = !(digitalRead(pin)); // read the button state and invert it (since a pulldown configuration inverts the logic)
  }
  else{ // if the input type is not pulldown
    state = digitalRead(pin); // read the button state
  }
  return state; // return the button state
}

void Pb::init(){ // function to initialize the button pin
  pinMode(pin,INPUT); // set the button pin as an input
}
