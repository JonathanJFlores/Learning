import RPi.GPIO as GPIO

button = 20
led = 2

GPIO.setmode(GPIO.BCM)
GPIO.setup( button, GPIO.OUT)

GPIO.setup( led, GPIO.IN)

while True:
    #GPIO.output(led, GPIO.input(button))
    
    if GPIO.input(button) == GPIO.HIGH:
        GPIO.output(led, GPIO.HIGH)
    else:
        GPIO.output(led, GPIO.LOW)
        
