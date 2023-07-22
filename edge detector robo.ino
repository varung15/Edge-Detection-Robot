//program by Shubham Shinganapure on 14-06-2019
//
//for Table Edge Avoiding Robot using IR sensors  
  
  
  
int in1=14; //left motor output 1
int in2=13; //left motor output 2
int in3=15;  //right motor output 1
int in4=12;  //right motor output 2

int sl=2;    //sensor 1 input (left)
int sr=0;    //sensor 2 input (right)
int SlV=0;
int SrV=0;
int led=A0;
void setup()
{
 pinMode(in1,OUTPUT);
 pinMode(in2,OUTPUT);
 pinMode(in3,OUTPUT);
 pinMode(in4,OUTPUT);
 pinMode(led,OUTPUT);
 pinMode(sl,INPUT);
 pinMode(sr,INPUT);
sTOP();
}
void loop()
{
 SlV=digitalRead(sl);
 SrV=digitalRead(sr);
 
 if(SrV==LOW && SlV== LOW)
 {
   digitalWrite(led,LOW);
  ForWard();
   }
   if(SrV==HIGH && SlV== HIGH)
 {
   digitalWrite(led,HIGH);
  BackWard();
  delay(700);
  Right();
  delay(800);
  ForWard();
  delay(200);
   }
    if(SrV==LOW && SlV== HIGH)
 {
  digitalWrite(led,HIGH);
  BackWard();
  delay(700);
  Right();
  delay(800);
  ForWard();
  delay(200);
   }
    if(SrV==HIGH && SlV== LOW)
 {
  digitalWrite(led,HIGH);
  BackWard();
  delay(700);
  Left();
  delay(800);
  ForWard();
  delay(200);
   }
}
void ForWard()
 {
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
 } 
 void BackWard()
 {
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
 }
 void Left()
 {
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
 } 
 void Right()
 {
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW );
 }  
   void sTOP()
 {
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
 }