#include "SPI.h"
#include "MFRC522.h"
#include <Servo.h> 

const int pinSDA = 10;
const int pinRST= 9;
const int pin="B A9 90 1C";
Servo test;

MFRC522 mfrc522(pinSDA,pinRST);

void setup()
{
  SPI.begin();
  mfrc522.PCD_Init();  // initiate the connected device pcd
  test.attach(8);
  Serial.begin(9600);
}

void loop()
{
  if(mfrc522.PICC_IsNewCardPresent())  // see whether card is connected or not
  {
    if(mfrc522.PICC_ReadCardSerial())  // read the card       
      Serial.print("RFID TAG ID:");
    {
      for(byte i=0;i<mfrc522.uid.size;++i)
      {
        int t=mfrc522.uid.uidByte[i];
        Serial.print(mfrc522.uid.uidByte[i],HEX);
        if(pin==t)
        {
          for(byte i=0;i<180;i++)
          {
            test.write(i);
            
          }
          
        }
        Serial.print(" ");
      }
      
      Serial.println();
    
    }
    
  }
  
}
