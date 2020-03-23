import RPi.GPIO as GPIO

pin =14

GPIO.setmode(GPIO.BOARD)
#GPIO.setmode(GPIO.BCM)

GPIO.setup(pin, GPIO.OUT)
#GPIO.setup(pin, GPIO.IN)

GPIO.output(pin, GPIO.HIGH)
#GPIO.output(pin, GPIO.LOW)
#GPIO.output(pin, 1)
#GPIO.output(pin, 0)

GPIO.input(pin)
