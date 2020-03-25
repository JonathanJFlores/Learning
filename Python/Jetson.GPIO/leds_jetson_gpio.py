import Jetson.GPIO as GPIO
import time

GPIO.cleanup()
GPIO.setmode(GPIO.BOARD)

LED =  40

GPIO.setup(LED, GPIO.OUT)

while True:
    GPIO.output(LED, 1)
    print('H')
    time.sleep(1)
    GPIO.output(LED, 0)
    print('L')
    time.sleep(2) 