#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Intake
inline pros::Motor intake(10);

// Middle Stage
inline pros::Motor mStage(-20);

// Top Stage
inline pros::Motor tStage(18);

// Lil-Will Mech
inline pros::adi::DigitalOut matchLoad('B');

// Aligner
inline pros::adi::DigitalOut aligner('A');

inline pros::adi::DigitalOut BallHold('D');

inline pros::adi::DigitalOut wings('E');



// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');