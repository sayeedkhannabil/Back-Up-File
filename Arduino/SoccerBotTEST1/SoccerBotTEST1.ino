#include <AFMotor.h>
AF_DCMotor right_motor(1, MOTOR12_64KHZ);
AF_DCMotor left_motor(2, MOTOR12_64KHZ);

String readString;

void setup() {
  Serial.begin(9600);
  right_motor.setSpeed(250);
  left_motor.setSpeed(250);
}

void loop() {
  while(Serial.available()){
    delay(50);
    char c=Serial.read();
    readString+=c;
  }
  if(readString.length()>0){
    Serial.println(readString);
    if (readString =="F"){
      right_motor.run (FORWARD);
      left_motor.run (FORWARD);
      delay(500);
    }
    if (readString =="B"){
      right_motor.run (BACKWARD);
      left_motor.run (BACKWARD);
      delay(500);
    }
    if (readString =="L"){
      right_motor.run (FORWARD);
      left_motor.run (BACKWARD);
      delay(500);
    }
    if (readString =="R"){
      right_motor.run (BACKWARD);
      left_motor.run (FORWARD);
      delay(500);
    }
    if (readString =="S"){
      right_motor.run (RELEASE);
      left_motor.run (RELEASE);
      delay(500);
    }

    readString="";
  }
}
