/* If Ir_Sensor finds white serface it returns Analog Value near 220
 or less than 250 (0 for digital input) & if finds black surface, it returns
 Analog value near 998 0r greater than 900. (1 for Digital input) 
*/
int motor_left_pin1 = 5; 
int motor_left_pin2 = 6; 
int motor_right_pin1 = 9;
int motor_right_pin2 = 10;
int front_trig = 7;
int front_echo = 8;
int left_trig = 12;
int left_echo = 13;
int ir_sensor_1 = A1; int ir_1;
int ir_sensor_2 = A2; int ir_2;
int ir_sensor_3 = A3; int ir_3;
int ir_sensor_4 = A4; int ir_4;
int ir_sensor_5 = A5; int ir_5;
int ir_sensor_6 = A6; int ir_6;


int vel_high = 180;
int vel_low = 80;
int vel_zero = 0;

void setup() {
// put your setup code here, to run once:
  pinMode(motor_left_pin1, OUTPUT);
  pinMode(motor_left_pin2, OUTPUT);
  pinMode(motor_right_pin1, OUTPUT);
  pinMode(motor_right_pin2, OUTPUT);
  pinMode(front_trig, OUTPUT);
  pinMode(left_trig, OUTPUT);
  pinMode(front_echo, INPUT);
  pinMode(left_echo, INPUT);
  pinMode(ir_sensor_1, INPUT);
  pinMode(ir_sensor_2, INPUT);
  pinMode(ir_sensor_3, INPUT);
  pinMode(ir_sensor_4, INPUT);
  pinMode(ir_sensor_5, INPUT);
  pinMode(ir_sensor_6, INPUT);

  digitalWrite(front_trig, LOW);
  digitalWrite(left_trig, LOW);
  Serial.begin(9600);
}

void loop() {

  int front_distance, left_distance;
  front_distance = findFrontDistance();
  left_distance = findLeftDistance();
  
  Serial.print("Front Distance: ");
  Serial.print(front_distance);
  Serial.println("cm");
  Serial.print("Left Distance: ");
  Serial.print(left_distance);
  Serial.println("cm");

  if(front_distance <= 10)
  {
    if(left_distance <= 10)
    {
      moveRight();
      Serial.println("Moving Right");
    }
    else if(left_distance > 10)
    {
      moveLeft();
      Serial.println("Moving left");
    }
  }
  else if(front_distance > 10)
  {
    moveForword();
    Serial.println("Moving Forword");
  }
  
  delay(1000);
  
  /*ir_1 = analogRead(ir_sensor_1);
  ir_2 = analogRead(ir_sensor_2);
  ir_3 = analogRead(ir_sensor_3);
  ir_4 = analogRead(ir_sensor_4);
  ir_5 = analogRead(ir_sensor_5);
  ir_6 = analogRead(ir_sensor_6);

 if( ir_3 > 900 && ir_4 > 900 && ir_1 <400 && ir_2 < 400 && ir_5 <400 && ir_6 < 400)
 {
  moveForword();
  
  Serial.println("Moving Forword");
 }
 
 if(ir_1 > 900 && ir_2 > 900)
 {
  moveRight();
  Serial.println("Moving Right");
 }

 if(ir_5 > 900 && ir_6 > 900)
 {
  moveLeft();
  Serial.println("Moving Left");
 }

  delay (2000);
  */
}





void moveForword()
{
  analogWrite(motor_left_pin1, vel_high);
  analogWrite(motor_left_pin2, vel_zero);
  analogWrite(motor_right_pin1, vel_high);
  analogWrite(motor_right_pin2, vel_zero);
}

void moveBack()
{
  analogWrite(motor_left_pin1, vel_zero);
  analogWrite(motor_left_pin2, vel_high);
  analogWrite(motor_right_pin1, vel_zero);
  analogWrite(motor_right_pin2, vel_high);
}

void moveLeft()
{
  analogWrite(motor_left_pin1, vel_zero);
  analogWrite(motor_left_pin2, vel_low);
  analogWrite(motor_right_pin1, vel_high);
  analogWrite(motor_right_pin2, vel_zero);
}

void moveRight()
{
  analogWrite(motor_left_pin1, vel_high);
  analogWrite(motor_left_pin2, vel_zero);
  analogWrite(motor_right_pin1, vel_zero);
  analogWrite(motor_right_pin2, vel_low);
}

void terminal()
{
  analogWrite(motor_left_pin1, vel_zero);
  analogWrite(motor_left_pin2, vel_zero);
  analogWrite(motor_right_pin1, vel_zero);
  analogWrite(motor_right_pin2, vel_zero);
}


//Functions for two ultrasonic sensors distance

int findFrontDistance()
{
  delayMicroseconds(10);
  digitalWrite(front_trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(front_trig, LOW);

  int front_duration = pulseIn(front_echo, HIGH);
  int front_distance = microsecondsToCentimeters(front_duration);

  return front_distance;

}

int findLeftDistance()
{
  delayMicroseconds(2);
  digitalWrite(left_trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(left_trig, LOW);
  int left_duration = pulseIn(left_echo, HIGH);
  int left_distance = microsecondsToCentimeters(left_duration);

  return left_distance;
}

int microsecondsToCentimeters(int microseconds)
{
  return microseconds / 29 / 2;
}



