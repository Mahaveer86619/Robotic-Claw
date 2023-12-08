/*

The claw has limit of 110 - 115 to fully close, to grab a object just go upto 100 - 110

*/
#include <Servo.h>

Servo baseServo, servo1, servo2, clawServo;

int data;

void setup() {


  servo1.attach(6);
  servo2.attach(7);
  baseServo.attach(8);
  clawServo.attach(9);


  Serial.begin(9600);


}

void loop() {

  
  // servo1.write(150);
  
  // BaseServo();
  // Servo1();
  // Servo2();
  // ClawServo();

}

void ClawServo() { // 70 - 110

  for (int angle = 90; angle >= 70; angle -= 3) {
    servoPulse(angle);
  }
  for (int angle = 70; angle <= 110; angle += 3) {
    servoPulse(angle);
  }
  for (int angle = 110; angle >= 90; angle -= 3) {
    servoPulse(angle);
  }

}

void Servo2() { // 70 - 160
  for (int angle = 90; angle >= 70; angle -= 1) {
    servoPulse(angle);
  }
  for (int angle = 70; angle <= 160; angle += 1) {
    servoPulse(angle);
  }
  for (int angle = 160; angle >= 90; angle -= 1) {
    servoPulse(angle);
  }
}

void Servo1() { // 60 - 150 
  for (int angle = 90; angle >= 60; angle -= 3) {
    servoPulse(angle);
  }
  for (int angle = 60; angle <= 150; angle += 3) {
    servoPulse(angle);
  }
  for (int angle = 150; angle >= 90; angle -= 3) {
    servoPulse(angle);
  }
}

void BaseServo(){ // 0 - 180
  for (int angle = 90; angle >= 0; angle -= 1) {
    servoPulse(angle);
  }
  for (int angle = 0; angle <= 180; angle += 1) {
    servoPulse(angle);
  }
  for (int angle = 180; angle >= 0; angle -= 1) {
    servoPulse(angle);
  }
}

void servoPulse(int angle) { //rotate arm of servo by given angle
  servo1.write(angle);
  delay(75);  // Refresh cycle of servo
}
