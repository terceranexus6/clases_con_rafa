/*
Jugando con la luz
*/
 
int verdePin = 11;
int azulPin = 10;
int rojoPin = 9;
 
//uncomment this line if using a Common Anode LED
//#define COMMON_ANODE
 
void setup()
{
  pinMode(rojoPin, OUTPUT);
  pinMode(verdePin, OUTPUT);
  pinMode(azulPin, OUTPUT);  
}
 
void loop()
{
  analogWrite(rojoPin, 255);
  
}
