#define ch1 26
#define ch2 27
int d=500;
void setup() {
  Serial.begin(9600);
  pinMode(ch1, OUTPUT);
  pinMode(ch2, OUTPUT);
}

void loop() {
  if(Serial.available()>0){
  char x= Serial.read();
  if(x=='P')//channel 1 ON
  {
    digitalWrite(ch1, HIGH);  
  }

  if(x=='Q')// Channel 1 OFF
  {
    digitalWrite(ch1, LOW);
  }
  
  if(x=='W')// Channel 2 ON
  {
    digitalWrite(ch2, HIGH);
  }

  if(x=='U')// Channel 2 OFF
  {
    digitalWrite(ch2, LOW);
  }
 }
}
