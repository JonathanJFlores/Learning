import socket

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

s.connect(("192.168.0.19", 2020))
print("Connected to server")

end = True
while end:
    message = input('Enter text: ')
    if message == 'end':
        end = False
    s.send(message.encode())
    msg = s.recv(8)
    if msg != b'':
        print('Server message: ', msg)
    else:
        print('Server disconnected')
        end = False

s.close()
