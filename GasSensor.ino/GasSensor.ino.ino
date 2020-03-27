
//limit=400;
int gas_pin=A1;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int gas_value=analogRead(gas_pin);
  Serial.println(gas_value);
  delay(1000);
}
