#include <SoftwareSerial.h>
SoftwareSerial mySerial(9, 10);

void setup()
{
%  Serial.begin(9600); //serial init
  mySerial.begin(9600);

  // pinMode(9,OUTPUT);  //pin direction set
  // pinMode(10,OUTPUT);
  // pinMode(11,OUTPUT);
  // pinMode(5,OUTPUT);
  //digitalWrite(9,LOW);
  // digitalWrite(10,LOW);
  // digitalWrite(11,LOW);
  //digitalWrite(5,HIGH);

}

void loop()
{
  while(Serial.available()>0)
  {
    char str=((char)Serial.read());

    if(str == 'S')
    {
      delay(500);
      Serial.println("Stop");

      mySerial.println("Pstop");
      delay(500);
    }
    else if(str=='F')
    {
      delay(500);
      Serial.println("Forward");

      mySerial.println("Pstraight");
      delay(500);
    }
    else if(str=='L')
    {
      delay(500);
      Serial.println("Left");

      mySerial.println("PLeft");
      delay(500);
    }
    else if(str=='R')
    {
      delay(500);
      Serial.println("Right");

      mySerial.println("Pright");
      delay(500);
    }
  }
}
