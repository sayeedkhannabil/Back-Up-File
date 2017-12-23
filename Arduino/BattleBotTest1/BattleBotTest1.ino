#define rightMotF 12
#define rightMotB 10
#define leftMotF 4
#define leftMotB 2
#define enableR 11
#define enableL 3
#define ch1 26
#define ch2 28

void setup() 
{
  Serial.begin(9600);
  pinMode(leftMotF,OUTPUT);
  pinMode(leftMotB,OUTPUT);
  pinMode(rightMotF,OUTPUT);
  pinMode(rightMotB,OUTPUT);
  pinMode(enableR,OUTPUT);
  pinMode(enableL,OUTPUT);
  pinMode(ch1, OUTPUT);
  pinMode(ch2, OUTPUT);
  digitalWrite(ch1, HIGH);
}


void loop() 
{
  if(Serial.available())
  {
    char x = Serial.read();
    
    if(x =='F') //front
    {
          digitalWrite(leftMotF , HIGH);
          digitalWrite(leftMotB , LOW);
          digitalWrite(rightMotF , HIGH);
          digitalWrite(rightMotB , LOW);
          digitalWrite(enableR,HIGH);
          digitalWrite(enableL,HIGH);
          delay(100);        
    }
   
    if(x =='R') //right
    {
        digitalWrite(leftMotF , HIGH);
        digitalWrite(leftMotB , LOW);
        digitalWrite(rightMotF , LOW);
        digitalWrite(rightMotB , HIGH);
        digitalWrite(enableR,HIGH);
        digitalWrite(enableL,HIGH);
        delay(100);        
    }
    
    if(x =='L') //left
    {
          digitalWrite(leftMotF , LOW);
          digitalWrite(leftMotB , HIGH);
          digitalWrite(rightMotF , HIGH);
          digitalWrite(rightMotB , LOW);
          digitalWrite(enableR,HIGH);
          digitalWrite(enableL,HIGH);
          delay(100);       
    }
    
    if(x =='B') //reverse
    {
      digitalWrite(leftMotF , LOW);
      digitalWrite(leftMotB , HIGH);
      digitalWrite(rightMotF , LOW);
      digitalWrite(rightMotB , HIGH);
      digitalWrite(enableR,HIGH);
      digitalWrite(enableL,HIGH);
      delay(100);    
      
    }
    
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
  digitalWrite(leftMotF , LOW);
  digitalWrite(leftMotB , LOW);
  digitalWrite(rightMotF , LOW);
  digitalWrite(rightMotB , LOW);
  digitalWrite(enableR,LOW);
  digitalWrite(enableL,LOW);   
    
 }
}
