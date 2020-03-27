//Connect the pin mode=2 with relay and other side of relay connect with GND limit is 700

int relay_pin=2;
int led_pin=A0;
void setup() {
    pinMode(relay_pin,OUTPUT);
    Serial.begin(9600);
}

void loop() {
 int output=analogRead(led_pin);
  Serial.print(output);
  
}
