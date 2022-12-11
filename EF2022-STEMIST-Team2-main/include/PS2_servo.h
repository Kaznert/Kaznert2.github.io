#include <Servo.h>
#include <PS2X_lib.h>
#include <avr/interrupt.h>
Servo servo;
PS2X ps2X;
#define SVO_1 A4
#define SVO_2 A5

void setupServo(){
    servo.attach(SVO_1);
    servo.attach(SVO_2);
}
void runServo(){
    if(ps2X.ButtonPressed(PSB_L1)){

    }
}