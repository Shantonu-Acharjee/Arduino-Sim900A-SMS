#include <SoftwareSerial.h>
SoftwareSerial gsm(7,8);//rx,tx
String outMessage = "Distbin Full!";
String destinationNumber = "+8801789333514";//01756473538  
void setup()
{
  gsm.begin(4800);
  gsm.print("AT+CMGF=1\r");
  delay(1000);
  gsm.println("AT + CMGS = \"" + destinationNumber +"\""); 
  delay(1000);
  gsm.print(outMessage);
  delay(1000);
  gsm.write((char)26);
//ctrl+z 
delay(1000);
gsm.println("AT+CLTS=1"); 
gsm.println("AT+CCLK?");
} 
void loop() { }
