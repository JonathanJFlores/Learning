import Jetson.GPIO as GPIO
import time 

GPIO.cleanup()
GPIO.setmode(GPIO.BOARD)

PIN_PUL = 23
PIN_DIR = 24

GPIO.setup(PIN_PUL, GPIO.OUT)
GPIO.setup(PIN_DIR, GPIO.OUT)

i = 0

while i < 400:
    GPIO.output(PIN_DIR, GPIO.HIGH)
    GPIO.output(PIN_PUL, GPIO.HIGH)
    time.sleep(0.01)
    GPIO.output(PIN_PUL, GPIO.LOW)
    i+=1
    print("i :", i)

x = 0
while x < 400:
    GPIO.output(PIN_DIR, GPIO.LOW)
    GPIO.output(PIN_PUL, GPIO.HIGH)
    time.sleep(0.01)
    GPIO.output(PIN_PUL, GPIO.LOW)
    x+=1
    print("x: ", x)


def negative_spin(steps):
    i = 0
    while i < steps:
        GPIO.output(PIN_DIR, GPIO.LOW)
        GPIO.output(PIN_PUL, GPIO.HIGH)
        time.sleep(0.01)
        GPIO.output(PIN_PUL, GPIO.LOW)
        i+=1  