import socket
import threading as th

def wait(socketClient):
    while True: 
        message = sktClient.recv(8)
        print('Message: ', message)
        sktClient.send('received'.encode())   

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.bind(("192.168.0.20", 2020))
s.listen(5)

while True:
    print('Waiting a client')
    (sktClient, addClient) = s.accept()
    print('Connected client')
    print('Client Ip:', addClient)
    
    thread = th.Thread(target = wait, args = (sktClient,))
    thread.start()
        
sktClient.close()
s.close()