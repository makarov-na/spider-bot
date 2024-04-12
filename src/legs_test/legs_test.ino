// Locate the initial position of legs
// RegisHsu 2015-09-09

#include <Servo.h>

Servo servo[4][3];

//define servos' ports
const int servo_pin[4][3] = { { 2, 3, 4 }, { 5, 6, 7 }, { 8, 9, 10 }, { 11, 12, 13 } };

void setup() {
  Serial.begin(115200);
  Serial.println("Robot starts initialization");
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  //initialize all servos
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      servo[i][j].attach(servo_pin[i][j]);

      Serial.println("Servo initialization "+String(i)+":"+String(j)+" pin "+String(servo_pin[i][j]));
      delay(100);
    }
  }
}

void loop(void) {

  //delay(800000);
  testLeg0();
  testLeg1();
  testLeg2();
  testLeg3();
  //test_leg(3);
  //delay(100);
  delay(800000);
}

void testLeg2(void) {
  for (int k = 45; k < 136; k++) {
    servo[3][0].write(k);
    delay(20);
  }
  for (int k = 135; k > 44; k--) {
    servo[3][0].write(k);
    delay(20);
  }


  for (int k = 135; k > 44; k--) {
    servo[3][1].write(k);
    delay(20);
  }
  for (int k = 45; k < 136; k++) {
    servo[3][1].write(k);
    delay(20);
  }

  for (int k = 135; k > 70; k--) {
    servo[3][2].write(k);
    delay(20);
  }
  for (int k = 70; k < 136; k++) {
    servo[3][2].write(k);
    delay(20);
  }
}

void testLeg3(void) {

  for (int k = 135; k > 60; k--) {
    servo[2][0].write(k);
    delay(20);
  }
  for (int k = 50; k < 135; k++) {
    servo[2][0].write(k);
    delay(20);
  }
  
  for (int k = 45; k < 136; k++) {
    servo[2][1].write(k);
    delay(20);
  }
  for (int k = 135; k > 44; k--) {
    servo[2][1].write(k);
    delay(20);
  }
  
  for (int k = 70; k < 136; k++) {
    servo[2][2].write(k);
    delay(20);
  }

  for (int k = 135; k > 70; k--) {
    servo[2][2].write(k);
    delay(20);
  }
  
}


void testLeg1(void) {

  for (int k = 135; k > 60; k--) {
    servo[1][0].write(k);
    delay(20);
  }
  for (int k = 50; k < 135; k++) {
    servo[1][0].write(k);
    delay(20);
  }
  
  for (int k = 45; k < 136; k++) {
    servo[1][1].write(k);
    delay(20);
  }
  for (int k = 135; k > 44; k--) {
    servo[1][1].write(k);
    delay(20);
  }
  
  for (int k = 70; k < 136; k++) {
    servo[1][2].write(k);
    delay(20);
  }

  for (int k = 135; k > 70; k--) {
    servo[1][2].write(k);
    delay(20);
  }
  

}
void testLeg0(void) {
  for (int k = 45; k < 136; k++) {
    servo[0][0].write(k);
    delay(20);
  }
  for (int k = 135; k > 44; k--) {
    servo[0][0].write(k);
    delay(20);
  }


  for (int k = 135; k > 44; k--) {
    servo[0][1].write(k);
    delay(20);
  }
  for (int k = 45; k < 136; k++) {
    servo[0][1].write(k);
    delay(20);
  }

  for (int k = 135; k > 70; k--) {
    servo[0][2].write(k);
    delay(20);
  }
  for (int k = 70; k < 136; k++) {
    servo[0][2].write(k);
    delay(20);
  }
}


