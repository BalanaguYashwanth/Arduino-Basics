import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.Board)
GPIO.setup(22,GPIO.IN) //IR sensor taking input values
GPIO.setup(5,GPIO.OUT) //Buzz sensor make sound
while True:
    val=GPIO.input(22)
    print(val)
    if val == 1:  //Infrared sensor has no obestacle
        GPIO.output(5,GPIO.LOW)
        time.sleep(2)
    else:
        GPIO.output(5,GPIO.HIGH)
        time.sleep(2)

