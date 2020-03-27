//vcc=5v
//temp_pin=A1
//GND=GND


float temp;
int temp_pin=A1;
void setup() {
  Serial.begin(9600);
}

void loop() {
   temp=analogRead(temp_pin);
  temp = temp * 0.48828125;
  Serial.println(temp);
  delay(1000);
}
