#include defines_includes.h


//Opject for PWM control
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();


void setup() {
  pwm.begin();
  pwm.setPWMFreq(FREQUENCY);
  initate90();
}

void loop(){
  //god help me
}


void moveMotor(int controlIn, int motorOut){
  
  int pulse_wide, pulse_width, potVal;
  // Read values from potentiometer
  potVal = analogRead(controlIn);
  
  // Convert to pulse width
  pulse_wide = map(potVal, 0, 1023, MIN_PULSE_WIDTH, MAX_PULSE_WIDTH);
  pulse_width = int(float(pulse_wide) / 1000000 * FREQUENCY * 4096);
  
  //Control Motor
  pwm.setPWM(motorOut, 0, pulse_width);
}

void initate90 (){
  //Control Motor
  pwm.setPWM(motorA, 0, init90v);
  pwm.setPWM(motorB, 0, init90v);
  pwm.setPWM(motorC, 0, init90v);
  pwm.setPWM(motorD, 0, init90v);
  pwm.setPWM(motorE, 0, init90v);
  pwm.setPWM(motorF, 0, init90v);
}