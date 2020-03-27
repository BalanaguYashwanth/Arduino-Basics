
//limit=300;
int sensor_value;
int sensor_pin=A0;
void setup() {
Serial.begin(9600);
}

void loop() {
   sensor_value=analogRead(sensor_pin);
  Serial.print(sensor_value);
}
