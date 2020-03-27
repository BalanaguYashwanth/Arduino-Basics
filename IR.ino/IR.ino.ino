

#include

#define first_key;
#define second_key;
#define third_key;
#define fourth_key;

int ir_pin=8;

int first_pin=4;
int second_pin=5;
int third_pin=6;
int fourth_pin=7;

IRrev reciever(ir_pin)
decode_results output;
int led[]={0,0,0,0}
  
void setup() {
    Serial.begin(9600);
    receiver.enableIRIn();
    pinMode(first_pin,OUTPUT);
    pinMode(second_pin,OUTPUT);
    pinMode(third_pin,OUTPUT);
    pinMode(fourth_pin,OUTPUT);
}

void loop() {
  if (receiver.decode(&output))
  {
    unsigned int ir_output= output.value; 
    switch(ir_output)
    {
      case first_key:
          if(led[0]==1)  
          {
         digitalWrite(first_pin,LOW);
         led[0]=0;
          }  
          else 
          {
          digitalWrite(first_pin,HIGH);
           led[0]=1;
          }
          break;
          

          
    }
    serial.println(ir_OUTPUT);
    receiver.resume();
  }

}
