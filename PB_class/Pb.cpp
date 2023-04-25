#include "Pb.h"
Pb :: Pb(int pin){
  this->pin = pin;
}
int Pb :: status(){
    int reading = digitalRead(pin);
  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > 50 {
    if (reading != state) {
      state = reading;
      state = digitalRead(pin);
      return state;
        
    }
  }
  
  }
}
void Pb :: init(){
  pinMode(pin,INPUT);
}
