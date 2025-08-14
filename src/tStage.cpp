#include "main.h"

void set_tStage(int input) {
  tStage.move(input);
}

void tStage_opcontrol() {
  if (master.get_digital(DIGITAL_L2)) {
    set_tStage(127);
  } 
  else {
    set_tStage(0);
  }
}