#include "DigiMouse.h"

void setup() {
  DigiMouse.begin(); //start or reenumerate USB - BREAKING CHANGE from old versions that didn't require this

}

void loop() {
    DigiMouse.move(1,0,0,0); //Start mouse moving
        DigiMouse.delay(60000); //Pause 1min
        DigiMouse.move(-1,0,0,0); //Move it back
        DigiMouse.delay(60000);
        DigiMouse.move(0,0,0,0); //Stop moving?

}
