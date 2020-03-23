import threading as th
import time 

def function():
    global count
    count = 0
    while True:
        time.sleep(1)
        print('Hola')
        count = count + 1 
            
thread = th.Thread(target=function)
thread.start()

n = count
while True:
    if n != count:
        print(count)
        n = count 