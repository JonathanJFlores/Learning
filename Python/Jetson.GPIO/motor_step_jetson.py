import Jetson.GPIO as GPIO
import time 

GPIO.cleanup()
GPIO.setmode(GPIO.BOARD)

PIN_IN1 = 29
PIN_IN2 = 31
PIN_IN3 = 33
PIN_IN4 = 35

GPIO.setup(PIN_IN1, GPIO.OUT)
GPIO.setup(PIN_IN2, GPIO.OUT)
GPIO.setup(PIN_IN3, GPIO.OUT)
GPIO.setup(PIN_IN4, GPIO.OUT)

def sequence(a, b , c, d):
    GPIO.output(PIN_IN1, a)
    GPIO.output(PIN_IN2, b)
    GPIO.output(PIN_IN3, c)
    GPIO.output(PIN_IN4, d)
    time.sleep(0.2)

while True:    
    sequence(1,0,0,0)
    sequence(1,1,0,0)
    sequence(0,1,0,0)
    sequence(0,1,1,0)
    sequence(0,0,1,0)
    sequence(0,0,1,1)
    sequence(0,0,0,1)
    sequence(1,0,0,1)
    sequence(0,0,0,0)

    
    
    
   