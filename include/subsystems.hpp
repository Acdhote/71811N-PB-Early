#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Intake
inline pros::Motor intake(19);

// Middle Stage
inline pros::Motor mStage(20);

// Top Stage
inline pros::Motor tStage(18);

// Lil-Will Mech
inline pros::adi::DigitalIn matchLoad('A');

// Aligner
inline pros::adi::DigitalIn aligner('B');

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');