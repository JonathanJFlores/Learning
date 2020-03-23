import 'dart:io';
import 'dart:convert';
import 'dart:async';

class ClientProvider{
  bool value = false;
  Socket socket;
  
  Future<Map<String, dynamic>> connectServer(String ip, int port , String message)async{
    socket = await Socket.connect(ip, port);

    // socket.listen((List<int> event) {
    //   print(utf8.decode(event));
    //  });
    socket.listen((List<int> event) {
        print(utf8.decode(event));
      if(utf8.decode(event) != 'Connected'){
        value = true;
      }else{
        value = false;
      }
   });
   
   
   if(value != false){
      socket.add(utf8.encode(message));
      return {'ok': true};
   }else{
      // socket.close();
      return {'ok': false};
   }
  }
}

// main() async {
//   Socket socket = await Socket.connect('192.168.0.20', 2020);
//   // print('connected');

//   // listen to the received data event stream
//   socket.listen((List<int> event) {
//     print(utf8.decode(event));
//   });

//   // send hello
//   socket.add(utf8.encode('hello'));
  
//   // wait 5 seconds
//   await Future.delayed(Duration(seconds: 5));

//   // .. and close the socket
//   socket.close();
// }