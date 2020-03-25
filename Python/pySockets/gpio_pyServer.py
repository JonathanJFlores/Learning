import Jetson.GPIO as GPIO
import time
import socket 

def spin(steps):
    i = 0
    while i < steps:
        GPIO.output(PIN_DIR, GPIO.HIGH)
        GPIO.output(PIN_PUL, GPIO.HIGH)
        time.sleep(0.01)
        GPIO.output(PIN_PUL, GPIO.LOW)
        i+=1
        
    x=0
    while x < steps:
        GPIO.output(PIN_DIR, GPIO.LOW)
        GPIO.output(PIN_PUL, GPIO.HIGH)
        time.sleep(0.01)
        GPIO.output(PIN_PUL, GPIO.LOW)
        x+=1

    
        

GPIO.cleanup()
GPIO.setmode(GPIO.BOARD)

PIN_PUL = 23
PIN_DIR = 24

GPIO.setup(PIN_PUL, GPIO.OUT)
GPIO.setup(PIN_DIR, GPIO.OUT)

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.bind(("192.168.0.19", 2020))
s.listen(1)
print('Waiting a client')

(sktClient, addClient) = s.accept()
print('Connected client')
print('Client Ip:', addClient)

end = True

while end:
    message = sktClient.recv(8)
    if(message != b''):
        msg = int(message.decode())
        print(type(msg))
        print('Message:', msg)
        print('-------')
        sktClient.send('received'.encode())
        spin(msg)
        
    else:
        print('end')
        end = False
    
sktClient.close()
s.close()