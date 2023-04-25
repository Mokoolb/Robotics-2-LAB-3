#include "Arduino.h"
#ifndef PB_H
#define PB_H
class Pb{
  private:
  int pin;
  int state;
  long lastDebounceTime = 0;
  int lastButtonState = 0;
  publiC:
  Pb(int pin);
  int status();
  void init();
};





#endif
