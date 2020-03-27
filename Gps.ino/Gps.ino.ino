
#include<SoftwareSerial.h>

SoftwareSerial ss(9,10);

void setup() {
  Serial.begin(115200);
  ss.begin(9600);

}

void loop() {
  if(ss.available()>0) //gps sense the loaction and then software serial is communicate with gps and whether data is avilable then it read the data and print by serials 
  {
    Serial.println(ss.read());
  }
  else
  {
    Serial.println("not detected");
  }
  delay(2000);

}
