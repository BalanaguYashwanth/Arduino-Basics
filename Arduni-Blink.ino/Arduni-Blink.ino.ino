
int built_in = 13;
void setup(){
  pinMode(built_in,OUTPUT);
}
void loop(){
  digitalWrite(built_in,HIGH);
  delay(2000);
  digitalWrite(built_in,LOW);
  delay(1000);
}
