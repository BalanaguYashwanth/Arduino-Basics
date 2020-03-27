#include<SoftwareSerial.h>

SoftwareSerial ss(9,10);

int trig=6;
int echo=7;
int LED=8;
int distance=0;

void setup() {
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);
  //serial.begin(115200)
  ss.begin(9600);
  
}

void loop() {
  digitalWrite(trig,LOW);
  delay(1000);
  digitalWrite(trig,HIGH);
  delay(1000);
  digitalWrite(trig,LOW);
  int duration=pulseIn(echo,HIGH);
   distance=(duration/2)/39.1;
  if(distance<10)
  {
    //Serial.flush();
    //Serial.begin(115200);
    if(ss.available()>0)
    {
      Serial.println(ss.read());
    }
  }
  
}
