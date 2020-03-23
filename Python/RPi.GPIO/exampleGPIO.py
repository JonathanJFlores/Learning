import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM)
GPIO.setup(2, GPIO.OUT)

contin = True

while contin:
    val = str(input('Enter a letter: '))
    if val == 'A':
        print('HIGH')
        #GPIO.output(2, GPIO.HIGH)
    elif val == 'B':
        print('LOW')
        #GPIO.output(2, GPIO.LOW)
    elif val == 'Z':
        contin = False
