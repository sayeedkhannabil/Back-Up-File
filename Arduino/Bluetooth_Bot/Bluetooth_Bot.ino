 // Bluetooth RC Robot 
 // Programmed By Garret Kamine
 

const int motor1Pin1 = 10;
const int motor1Pin2 = 12;
const int enablem1Pin3 = 11;
const int motor2Pin1 = 4;
const int motor2Pin2 = 2;
const int enablem2Pin3 = 3;

byte serialA;



void setup() {
  
 Serial.begin(9600);

    pinMode(motor1Pin1, OUTPUT);
    pinMode(motor1Pin2, OUTPUT);
    pinMode(enablem1Pin3, OUTPUT);
    pinMode(motor2Pin1, OUTPUT);
    pinMode(motor2Pin2, OUTPUT);
    pinMode(enablem2Pin3, OUTPUT);

}

void loop() {

if (Serial.available() > 0) {serialA = Serial.read();Serial.println(serialA);}

   switch (serialA) {
    // forward
   case 'F':
        digitalWrite(motor1Pin1, HIGH);
        digitalWrite(motor1Pin2, HIGH); 
        digitalWrite(motor2Pin1, HIGH);
        digitalWrite(motor2Pin2, HIGH);
        digitalWrite(enablem1Pin3, HIGH);
        digitalWrite(enablem2Pin3, HIGH);
        digitalWrite(enablem1Pin3, LOW);
        digitalWrite(enablem2Pin3, LOW);
        break; 
        
         // left
    case 'L':
        digitalWrite(motor1Pin1, HIGH);
        digitalWrite(motor1Pin2, HIGH); 
        digitalWrite(motor2Pin1, LOW);
        digitalWrite(motor2Pin2, HIGH);
        digitalWrite(enablem1Pin3, HIGH);
        digitalWrite(enablem2Pin3, HIGH);
        digitalWrite(enablem1Pin3, LOW);
        digitalWrite(enablem2Pin3, LOW);
        break; 
        
    // right
    case 'R':
        digitalWrite(motor1Pin1, HIGH); 
        digitalWrite(motor1Pin2, HIGH); 
        digitalWrite(motor2Pin1, LOW);
        digitalWrite(motor2Pin2, HIGH);
        digitalWrite(enablem1Pin3, HIGH);
        digitalWrite(enablem2Pin3, HIGH);
        digitalWrite(enablem1Pin3, LOW);
        digitalWrite(enablem2Pin3, LOW);
        break; 
       
    // forward left
    case 'G':
        digitalWrite(motor1Pin1, HIGH); 
        digitalWrite(motor1Pin2, LOW); 
        digitalWrite(motor2Pin1, LOW);
        digitalWrite(motor2Pin2, LOW);
        digitalWrite(enablem1Pin3, HIGH);
        digitalWrite(enablem2Pin3, HIGH);
        break; 
    

    // forward right
    case 'I':
        digitalWrite(motor1Pin1, LOW); 
        digitalWrite(motor1Pin2, LOW); 
        digitalWrite(motor2Pin1, LOW);
        digitalWrite(motor2Pin2, HIGH);
        digitalWrite(enablem1Pin3, HIGH);
        digitalWrite(enablem2Pin3, HIGH);
        break; 
    

    // backward left
    case 'H':
        digitalWrite(motor1Pin1, HIGH); 
        digitalWrite(motor1Pin2, LOW); 
        digitalWrite(motor2Pin1, HIGH);
        digitalWrite(motor2Pin2, LOW);
        digitalWrite(enablem1Pin3, HIGH);
        digitalWrite(enablem2Pin3, HIGH);
        break; 
    
    // backward right
    case 'J':
        digitalWrite(motor1Pin1, LOW); 
        digitalWrite(motor1Pin2, HIGH); 
        digitalWrite(motor2Pin1, LOW);
        digitalWrite(motor2Pin2, HIGH);
        digitalWrite(enablem1Pin3, HIGH);
        digitalWrite(enablem2Pin3, HIGH);
        break; 
    
    // backward
    case 'B':
        digitalWrite(motor1Pin1, LOW); 
        digitalWrite(motor1Pin2, HIGH);
        digitalWrite(motor2Pin1, LOW);
        digitalWrite(motor2Pin2, HIGH);
        digitalWrite(enablem1Pin3, HIGH);
        digitalWrite(enablem2Pin3, HIGH);
        digitalWrite(enablem1Pin3, LOW);
        digitalWrite(enablem2Pin3, LOW);
        break; 
    
     // Stop
     
     /*case 'S':
        digitalWrite(motor1Pin1, LOW); 
        digitalWrite(motor1Pin2, LOW); 
        digitalWrite(motor2Pin1, LOW);
        digitalWrite(motor2Pin2, LOW);
        digitalWrite(enablem1Pin3, LOW);
        digitalWrite(enablem2Pin3, LOW);*/
        }
    }
