#ifndef pinment_h
#define pinment_h

// Libraries
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
#include <Serial.h>
// Defines
#define MIN_PULSE_WIDTH       650
#define MAX_PULSE_WIDTH       2350
#define FREQUENCY             50
#define init90v               307

// HC-05 Control Values
//right
#define MIN_RIGHT_VALUE       0x00
#define MAX_RIGHT_VALUE       0x00
#define MID_RIGHT_VALUE       0x00

//left
#define MIX_LEFT_VALUE        0x00
#define MAN_LEFT_VALUE        0x00
#define MID_LEFT_VALUE        0x00

//button
#define DOTIGH                0x00
#define UNTIGH                0x00

// Motor Pins On The PCA9685
#define motorA                0
#define motorB                2
#define motorC                4
#define motorD                6
#define motorE                8
#define motorF                10


int y = 0;
int x = 0;


void initate90(void){}
void moveMotor(int, int){}




#endif