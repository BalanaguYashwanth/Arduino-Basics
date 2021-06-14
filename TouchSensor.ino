int const pin = A0;
int const pin1 = D1;

void setup() {
  pinMode(pin1,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int touch=0;
  touch=analogRead(pin);
  if(touch>20 && touch <30)
  {
    Serial.println("pin1-100");
    analogWrite(pin1,100);
    delay(1000);
    analogWrite(pin1,0);
    delay(1000);
  }
  if(touch>30 && touch<40)
  {
    Serial.println("pin1-200");
    analogWrite(pin1,200);
    delay(1000);
    analogWrite(pin1,0);
    delay(1000);
  }
  if(touch>50)
  {
    Serial.println("pin1-300");
    analogWrite(pin1,255);
    delay(1000);
    analogWrite(pin1,0);
    delay(1000);
  }
  Serial.println(touch);
  delay(1000);
}

  
