import socket

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

s.connect(("192.168.0.20", 2020))
print("Connected to server")

end = True
while end:
    message = input('Enter text: ')
    if message == 'end':
        end = False
    s.send(message.encode())
    msg = s.recv(8)
    print('Server message: ', msg)
s.close()
