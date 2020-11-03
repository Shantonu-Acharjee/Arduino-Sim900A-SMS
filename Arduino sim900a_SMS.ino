#include <SoftwareSerial.h>
SoftwareSerial gsm(7,8);//tx,rx
String outMessage = "Distbin Full!";
String destinationNumber = "+8801xxxxxxx";//Enter your phone number
void setup()
{
gsm.begin(115200);
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














