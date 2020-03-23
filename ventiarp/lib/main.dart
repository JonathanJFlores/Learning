import 'package:flutter/material.dart';
import 'package:ventiarp/src/home_page.dart';

void main() => runApp(MyApp());

class MyApp extends StatefulWidget {

  @override
  _MyAppState createState() => _MyAppState();
}

class _MyAppState extends State<MyApp> {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      initialRoute: 'homepage',
      routes: {
        'homepage' : (BuildContext context) => HomePage(),
      },
    );
  }
}