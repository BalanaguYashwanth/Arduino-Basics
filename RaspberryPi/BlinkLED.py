import RPi.GPIO as GPIO  //import the library
import time 
GPIO.setmode(GPIO.BOARD) //set GPIO.BOARD = board pins or GPIO.BCM = gpio pins 
GPIO.setup(22,GPIO.OUT)  //set GPIO as output
while True:
    GPIO.outputT(22,True)
    time.sleep(1)
    GPIO.output(22,False)
    time.sleep(1)
