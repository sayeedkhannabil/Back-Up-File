int ledPin;
int d=100; 

void setup() //run one
{
  //intialize output
  
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  
  
}

void loop () //run continuously forever
{
  for(int i=2; i<6; i++){
    digitalWrite(i, HIGH);
    delay(d);
    digitalWrite(i, LOW); 
  }

  for(int i=4; i>2; i--){
    digitalWrite(i, HIGH);
    delay(d);
    digitalWrite(i, LOW);
  }
  
}
