
//vcc=5v
//data=digitalPin
//gnd=gnd


int pir_pin=7;
void setup() {
  Serial.begin(9600);
  pinMode(pir_pin,INPUT);

}

void loop() {
  int pin_out=digitalRead(pir_pin);
  if(pin_out==HIGH)
  {
    Serial.println("on");
   // Serial.println(pin_out);
  }
  else
  {
  Serial.println("output not detected");
  //Serial.println(pin_out);
  }
  
  delay(1000);
}
