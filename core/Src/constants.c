#include "constants.h"

// Mathematical Constants
const float M_PI = 3.1415926f;

// Controller
const float M_CONTROLLER_JOYSTICK_SCALE = 660.0f;
const int M_CONTROLLER_SWITCH_STATES[] = {0, 1, 2};
const int M_CONTROLLER_X_AXIS = 2;
const int M_CONTROLLER_Y_AXIS = 3;
const int M_CONTROLLER_ROTATION_AXIS = 1;


// M3508 Motor
const float M_MOTOR_M3508_VOLTAGE_SCALE = 16384.0f; 
const float M_ENCODER_M3508_SCALE = 8191.0f;
const float M3508_REDUCTION_RATIO = 3591.0f / 187.0f;

// M2006 Motor
const float M_MOTOR_M2006_VOLTAGE_SCALE = 16384.0f; 
const float M_ENCODER_M2006_SCALE = 8191.0f;
const float M2006_REDUCTION_RATIO = 36.0f;

// GM6020 Motor
const float M_MOTOR_GM6020_VOLTAGE_SCALE = 30000.0f;
const float M_ENCODER_GM6020_SCALE = 8191.0f;

//Snail Motor
<<<<<<< HEAD
const float M_MOTOR_SNAIL_SWITCH_STATES[] = {1, 2, 3};
=======
>>>>>>> 1e88f270e1d0fe7b663b3fb24b7510298db2865e
const float M_MOTOR_SNAIL_MAX = 1000.0f;
const float M_MOTOR_SNAIL_OFFSET = 1000.0f;