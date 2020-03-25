import socket

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
        
    else:
        print('end')
        end = False
    
sktClient.close()
s.close()