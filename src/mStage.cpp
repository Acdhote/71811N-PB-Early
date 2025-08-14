#include "main.h"

void set_mStage(int input) {
  mStage.move(input);
}

void mStage_opcontrol() {
  if (master.get_digital(DIGITAL_L1)) {
    set_mStage(127);
  } 
  else {
    set_mStage(0);
  }
}