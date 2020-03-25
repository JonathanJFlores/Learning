import numpy as np
import time
import Jetson.GPIO as GPIO

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

lstep =  [[1,0,0,0],
          [1,1,0,0],
          [0,1,0,0],
          [0,1,1,0],
          [0,0,1,0],
          [0,0,1,1],
          [0,0,0,1],
          [1,0,0,1]
          ]

steparray = np.array(lstep)
print(steparray)

i = 0
for i in range(0, 200):
     i+=1
     print(i)
     
     l=0
     for l in range(0,8):
         GPIO.output(PIN_IN1, steparray[l][0])
         GPIO.output(PIN_IN2, steparray[l][1])
         GPIO.output(PIN_IN3, steparray[l][2])
         GPIO.output(PIN_IN4, steparray[l][3])
         time.sleep(0.2)
         l+=1
         GPIO.output(PIN_IN1, GPIO.HIGH)
         GPIO.output(PIN_IN2, GPIO.LOW)
         GPIO.output(PIN_IN3, GPIO.LOW)
         GPIO.output(PIN_IN4, GPIO.LOW)
         time.sleep(0.1)
         print("l", l)
         
         