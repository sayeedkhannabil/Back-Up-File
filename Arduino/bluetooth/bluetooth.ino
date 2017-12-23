#define rightMotF 12
#define rightMotB 10
#define leftMotF 4
#define leftMotB 2
#define enableR 11
#define enableL 3

void setup() 
{
  Serial.begin(9600);
  pinMode(leftMotF,OUTPUT);
  pinMode(leftMotB,OUTPUT);
  pinMode(rightMotF,OUTPUT);
  pinMode(rightMotB,OUTPUT);
  pinMode(enableR,OUTPUT);
  pinMode(enableL,OUTPUT);
}


void loop() 
{
  if(Serial.available()>0)
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
  digitalWrite(leftMotF , LOW);
  digitalWrite(leftMotB , LOW);
  digitalWrite(rightMotF , LOW);
  digitalWrite(rightMotB , LOW);
  digitalWrite(enableR,LOW);
  digitalWrite(enableL,LOW);   
    
 }
}
