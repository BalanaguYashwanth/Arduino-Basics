
#include <SoftwareSerial.h>

SoftwareSerial mySerial(9,10);


void setup() {
  mySerial.begin(9600);
  Serial.begin(9600);
  delay(100);
  
}

void loop() {
  if(Serial.available()>0)
  switch(Serial.read())
  {
    case s:
    sendmessage();
    break;
    case r:
    recievemessage();
    break;
  }

  if(mySerial.available()>0)
  { 
    serial.println(mySerial.read());
  }

  void sendmessage()
  {
      mySerial.println("AT+CMGF=1");
      delay(1000);
      mySerial.println("AT+CMGS=\"++91XXXXXXXX\"\r");
      delay(1000);
      mySerial.println(char(26));
      delay(1000);
      
      
  }
  void reciever()
  {
    mySerial.println("AT+CNMI=2,2,0,0");
    delay(1000);
  }

}
