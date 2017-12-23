
#define inA 8
#define inB 9
#define inC 7
#define inD 6
#define ena 10
#define enb 5

int th[8]={600,600,600,600,600,600,600,600};
void wheel(int lm, int rm);
int led[8]={52,50,48,46,44};
//int i,sen[8],s[8], lastSensor,lastError;
int i,sen[5],s[5], lastSensor,lastError;
int base_L=180;
int base_R=180;
int kp=0;
int kd=20;
void setup()
{
  mot_init();
  other_init();
}
void loop()
{
  
  line_follow();
}

void other_init()
{
  lastSensor=0;
  lastError=0;
  Serial.begin(9600);
}

void mot_init()
{
  pinMode(inA,OUTPUT);
  pinMode(inB,OUTPUT);
  pinMode(inC,OUTPUT);
  pinMode(inD,OUTPUT);
  pinMode(ena,OUTPUT);
  pinMode(enb,OUTPUT);
//  pinMode(trig1,OUTPUT);
 // pinMode(echo1,INPUT);
  digitalWrite(inA,HIGH);
  digitalWrite(inB,HIGH);
  digitalWrite(inC,HIGH);
  digitalWrite(inD,HIGH);
}

void wheel(int rm, int lm)
{
  if(lm==0)
  {
    digitalWrite(inC,HIGH);
    digitalWrite(inD,HIGH);
  }
  if(lm>0)
  {
    digitalWrite(inC,HIGH);
    digitalWrite(inD,LOW);
  }
  else if(lm<0)
  {
    digitalWrite(inC,LOW);
    digitalWrite(inD,HIGH);
  }


  if(rm==0)
  {
    digitalWrite(inA,HIGH);
    digitalWrite(inB,HIGH);
  }
  if(rm>0)
  {
    digitalWrite(inA,HIGH);
    digitalWrite(inB,LOW);
  }
  else if(rm<0)
  {
    digitalWrite(inA,LOW);
    digitalWrite(inB,HIGH);
  }
  if(lm>254) lm=254;
  if(lm<-254) lm=-254;
  if(rm>254) rm=254;
  if(rm<-254) rm=-254;
  
  analogWrite(ena,abs(rm));
  analogWrite(enb,abs(lm));
  
}

int readSensor()
{
  for(i=0;i<5;i++)
  { 
    sen[i]=analogRead(i);
    Serial.print(sen[i]);
    Serial.print(" ");
    if(sen[i]>th[i])
    {
      s[i]=0;
      Serial.print("LOW ");
    }
    else { 
      s[i]=1;
      Serial.print("HIGH ");
    }
    
  }
  Serial.println();
  
  int error,sum;
  sum=s[0]+s[1]+s[2]+s[3]+s[4];
  if(sum!=0)
  {
    error=(s[0]*10+s[1]*20+s[2]*30+s[3]*40+s[4]*50)/sum-30;
  }
  else
  {
     error=1234;
  }
  
  if(s[0]==1) lastSensor=1;
  else if(s[4]==1) lastSensor =2;
  return error;
}

/*int checkpulse(int trig,int echo)
{
  digitalWrite(trig,LOW);
  delay(20);
  digitalWrite(trig,HIGH);
  delay(20);
  digitalWrite(trig,LOW);
  delay(5);
  int distance=pulseIn(echo,HIGH)/58;
}

void dit(int dis)
{
  int cdis=16;
  left=16-distance;
  wheel(100,100+left*10);
}*/

void line_follow()
{
  int error,p,d,corr;
 error=readSensor();
 if(error==1234)
 {
/*   int distance=checkpulse(trig1,echo1);
   int distancef=checkpulse(trig2,echo2);
   if((distance<=25 && distance>0) && (distancef>15 || distancef<0))
   {
    dit(distance);
   }
   else
   {
    if(distancef<15 && distancef>0)
    {
      int distance=checkpulse(trig1,echo1);
      if((distance<=25 && distance>0)
      {
        while(distancef>25 && distance<=20){
          wheel(20,120);
          distance=checkpulse(trig1,echo1);
          distancef=checkpulse(trig2,echo2);
        }
      }
      else
      {
        while(distance>25){
          wheel(100,20);
          distance=checkpulse(trig1,echo1);
        }
      }
    }
    else
    {*/
      if(lastSensor==1) wheel(-100,100);
      else if(lastSensor==2) wheel(100,-100);
   // }
  // }
 }
 else 
 { 
   p=kp*error;
   d=kd*(error-lastError);
   corr=p+d;
   wheel(base_L+corr,base_R-corr);
   if((error-lastError)!=0) delay(5);
   lastError=error;
 }
 
}
