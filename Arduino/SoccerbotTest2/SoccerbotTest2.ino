#include <AFMotor.h>

int d= 200;
AF_DCMotor forward_right(1, MOTOR12_1KHZ);
AF_DCMotor forward_left(2, MOTOR12_1KHZ);
AF_DCMotor backward_left(3, MOTOR12_1KHZ);
AF_DCMotor backward_right(4, MOTOR12_1KHZ);
void setup()
{
  Serial.begin(9600);
  forward_right.setSpeed(d);
  forward_left.setSpeed(d);
  backward_left.setSpeed(d);
  backward_right.setSpeed(d);

}

void loop()
{
  if(Serial.available()>0){
    char x = Serial.read();

    if(x =='F') //front
    {
      forward_right.run(BACKWARD);
      forward_left.run(BACKWARD);
      backward_left.run(BACKWARD);
      backward_right.run(BACKWARD);
      delay(100);
    }

    if(x=='B') //back
    {
      forward_right.run(FORWARD);
      forward_left.run(FORWARD);
      backward_left.run(FORWARD);
      backward_right.run(FORWARD);
      delay(100);
    }

    if(x=='L')//Left
    {
      forward_right.run(BACKWARD);
      forward_left.run(RELEASE);
      backward_left.run(RELEASE);
      backward_right.run(BACKWARD);
      delay(100);
    }

    if(x=='R')//Right
    {
      forward_right.run(RELEASE);
      forward_left.run(BACKWARD);
      backward_left.run(BACKWARD);
      backward_right.run(RELEASE);
      delay(100);
    }

    forward_right.run(RELEASE);
    forward_left.run(RELEASE);
    backward_left.run(RELEASE);
    backward_right.run(RELEASE);
    
  }

}
