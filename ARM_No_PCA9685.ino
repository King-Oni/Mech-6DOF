#include <Servo.h>

//servo objects
Servo mtr1;
Servo mtr2;
Servo mtr3;
Servo mtr4;
Servo mtr5;
Servo mtr6;

void setup(){
    //servo control
    pinMode(A0,INPUT);
    pinMode(A1,INPUT);
    pinMode(A2,INPUT);
    pinMode(A3,INPUT);
    pinMode(A4,INPUT);
    pinMode(A5,INPUT);

    //servo pins
    mtr1.attach(3);
    mtr2.attach(5);
    mtr3.attach(6);
    mtr4.attach(9);
    mtr5.attach(10);
    mtr6.attach(11);
}


void loop(){
    //read control
    int ca,cb,cc,cd,ce,cf;
    ca = analogRead(A0);
    cb = analogRead(A1);
    cc = analogRead(A2);
    cd = analogRead(A3);
    ce = analogRead(A4);
    cf = analogRead(A5);
    //move servo
    mtr1.write(map(ca,0,1024,0,180));
    mtr2.write(map(cb,0,1024,0,180));
    mtr3.write(map(cc,0,1024,0,180));
    mtr4.write(map(cd,0,1024,0,180));
    mtr5.write(map(ce,0,1024,0,180));
    mtr6.write(map(cf,0,1024,0,180));
}
