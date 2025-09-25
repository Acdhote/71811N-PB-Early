#include "main.h"
bool a = false;
bool b = false;
bool c = false;
bool d = false;
void set_tStage(int input) {
  tStage.move(input);
}

void tStage_opcontrol() {
  if (master.get_digital(DIGITAL_L1)) {
    set_tStage(127);
  } 
  else {
    set_tStage(0);
  }
}

void toggleStageSwitch() {
  if (master.get_digital_new_press(DIGITAL_B)) {
    a = !a;
    aligner.set_value(a);
  }
}

void toggleMatchLoad() {
  if (master.get_digital_new_press(DIGITAL_A)) {
    b = !b;
    matchLoad.set_value(b);
  }
}

void toggleBallHold() {
  if (master.get_digital_new_press(DIGITAL_X)) {
    c = !c;
    BallHold.set_value(c);
  }
}

void toggleWings() {
  if (master.get_digital_new_press(DIGITAL_UP)) {
    d = !d;
    wings.set_value(d);
  }
}