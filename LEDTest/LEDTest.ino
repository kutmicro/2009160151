#include "LedControl.h"
LedControl lc = LedControl(12, 11, 10, 1);


void setup() {
  // put your setup code here, to run once:
  lc.shutdown(0,false);
  lc.setIntensity(0,1);
  lc.clearDisplay(0);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int row = 0; row < 8; row++) {
    for(int col = 0; col < 8; col++) {
      lc.setLed(0, col, row, true);
      delay(25);
    }
  }
  for(int row = 0; row < 8; row++) {
    for(int col = 0; col < 8; col++) {
      lc.setLed(0, col, row, false);
      delay(25);
    }
  }
}
