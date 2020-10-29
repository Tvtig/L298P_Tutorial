#include "Servo.h"

int MOTOR1_DIRECTION_PIN = 12;
int MOTOR2_DIRECTION_PIN = 13;

int MOTOR1_SPEED_PIN = 10;
int MOTOR2_SPEED_PIN = 11;

int SERVO_PIN = 9;

Servo _servo;

void setup() {
  pinMode(MOTOR1_DIRECTION_PIN, OUTPUT);
  pinMode(MOTOR2_DIRECTION_PIN, OUTPUT);
  pinMode(MOTOR1_SPEED_PIN, OUTPUT);
  pinMode(MOTOR2_SPEED_PIN, OUTPUT);
  
  _servo.attach(SERVO_PIN);
}

void loop() {
  int motorValue = 0;
  
  digitalWrite(MOTOR1_DIRECTION_PIN,HIGH);
  analogWrite(MOTOR1_SPEED_PIN,motorValue);
  
  digitalWrite(MOTOR2_DIRECTION_PIN,HIGH);
  analogWrite(MOTOR2_SPEED_PIN,motorValue);

  int servoValue = 0;

  _servo.write(servoValue);  

  delay(2000);

  motorValue = 50;
  servoValue = 180;
  
  analogWrite(MOTOR1_SPEED_PIN,motorValue);
  analogWrite(MOTOR2_SPEED_PIN,motorValue);
  _servo.write(servoValue);  

  delay(5000);

  motorValue = 100;
  servoValue = 90;

  digitalWrite(MOTOR2_DIRECTION_PIN,LOW);
  digitalWrite(MOTOR1_DIRECTION_PIN,LOW);
  
  analogWrite(MOTOR1_SPEED_PIN,motorValue);
  analogWrite(MOTOR2_SPEED_PIN,motorValue);
  _servo.write(servoValue);  

  delay(5000);
  
}
