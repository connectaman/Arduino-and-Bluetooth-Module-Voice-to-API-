#include<SoftwareSerial.h>
#include<string.h>
SoftwareSerial Genotronex(8,9);
int BluetoothData;
String voice; 
void setup() {
  Serial.begin(38400);
  Genotronex.begin(38400);
  pinMode(2,OUTPUT);
   pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
     pinMode(5,OUTPUT);
 }
 
void loop() {
  
  while (Genotronex.available())
  {
    delay(10); 
    char c = Genotronex.read(); 
    if (c == '#') 
    {break;
    }
    voice += c; 
  } 
  if (voice.length() > 0)
  {
   
    Serial.println(voice);   
  }
voice="";
} 
