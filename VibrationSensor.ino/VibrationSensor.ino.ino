int vib_pin=7;
void setup() {
  pinMode(vib_pin,INPUT);
  Serial.begin(9600);
  
}

void loop() {
  int vib_out = digitalRead(vib_pin);
  if(vib_out==HIGH)
  {
   Serial.println("on");
   delay(4000); 
  }
  else
  Serial.println("off"); 

}
