import 'package:flutter/material.dart';

import 'providers/client.dart';

class HomePage extends StatefulWidget {
  
  @override
  _HomePageState createState() => _HomePageState();
}

class _HomePageState extends State<HomePage> {
final formkey = GlobalKey<FormState>();

String ip;
int port = 0;
String message;

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        centerTitle: true,
        title: Text('VentiArpp'),
      ),
      body: Form(
        key: formkey,
          child: Column(
          crossAxisAlignment: CrossAxisAlignment.center,
          mainAxisAlignment: MainAxisAlignment.spaceEvenly,
          children: <Widget>[
            Text('Connect to server IP'),
            _ipserver(),
            Text('Server port'),
            _serverport(),
            Text('Message'),
            _message(),
            Row(
              crossAxisAlignment: CrossAxisAlignment.center,
              mainAxisAlignment: MainAxisAlignment.center,
              children: <Widget>[
                 Text('Send'),
                 SizedBox(width: 10.0),
                 _send()
              ],
            )
          ],
        ),
      )
    );
  }


  Widget _ipserver() {
    return Padding(
      padding: const EdgeInsets.all(8.0),
      child: TextFormField(
        initialValue: ip,
        keyboardType: TextInputType.numberWithOptions(),
        decoration: InputDecoration(
          border: OutlineInputBorder(
            borderRadius: BorderRadius.circular(30.0)
          ),
          contentPadding: EdgeInsets.fromLTRB(20.0, 10.0, 20.0, 10.0),
          // labelText: 'IP',
          hintText: '192.168.0.1',
          helperText: 'Ejemplo: 192.168.0.1',
          suffixIcon: Icon(Icons.router)
        ),
        onSaved: (value) => ip = value,
      ),
    );
  }

  Widget _serverport() {

    return Padding(
      padding: const EdgeInsets.all(8.0),
      child: TextFormField(
        // initialValue: port,
        keyboardType: TextInputType.number,
         decoration: InputDecoration(
          border: OutlineInputBorder(
            borderRadius: BorderRadius.circular(30.0)
          ),
          contentPadding: EdgeInsets.fromLTRB(20.0, 10.0, 20.0, 10.0),
          // labelText: 'Port',
          hintText: '2020',
          helperText: 'Ejemplo: 2020',
          suffixIcon: Icon(Icons.device_hub)
        ),
        onSaved: ( value) => port = int.parse(value)
      ),
    );
  }

  Widget _message() {
    return Padding(
      padding: const EdgeInsets.all(8.0),
      child: TextFormField(
        initialValue: message,
        decoration: InputDecoration(
          border: OutlineInputBorder(
            borderRadius: BorderRadius.circular(30.0)
          ),
          contentPadding: EdgeInsets.fromLTRB(20.0, 10.0, 20.0, 10.0),
          // labelText: 'Message:',
          helperText: 'Ejemplo: HIGH',
          hintText: 'HIGH',
          suffixIcon: Icon(Icons.text_format)
        ),
        onSaved: (value) => message = value,
      ),
    );
  }

  Widget _send() {
    return IconButton(
      icon: Icon(Icons.send),
      color: Colors.lightBlueAccent,
      onPressed: _sendmessage
    );
  }

    _sendmessage() async {
      formkey.currentState.save();

      print(ip);
      print(port);
      print(message);

      final clienteProvider = new ClientProvider();
      final info = await clienteProvider.connectServer(ip, port, message);
      print('-----');
      print(info['ok']);
      
    }
}