
//int ledPin = 13; // choose the pin for the LED
int straight = 9; // choose the input pin (for a pushbutton)
int left = 10;
int right = 11;

int val1 = 0; // variable for reading the pin status
int val2 = 0;
int val3 = 0;
int state =0;

void setup() {
  //pinMode(ledPin, OUTPUT); // declare LED as output
  pinMode(straight, INPUT); // declare pushbutton as input
  pinMode(left, INPUT);
  pinMode(right, INPUT);
  Serial.begin(38400);
}

void loop(){
  if(Serial.available() &gt; 0) { // Checks whether data is comming from the serial port
    state = Serial.read();
  } // Send the data from the serial port

  val1 = digitalRead(straight); // read input value
  val2 = digitalRead(left);
  val3 = digitalRead(right);
  if (val1 == LOW ) // check if the input is HIGH (button released)
  {
    if(val2 == LOW)
    {
      if(val3 == LOW)
      {
        delay(500);
        Serial.println(&quot;S&quot;);
        delay(500);
      }
    }
  }

  if (val1 == LOW ) // check if the input is HIGH (button released)
  {
    if(val2 == LOW)
    {
      if(val3 == HIGH)
      {
        delay(500);
        Serial.println(&quot;L&quot;);
        delay(500);
      }
    }
  }

  if (val1 == LOW ) // check if the input is HIGH (button released)
  {
    if(val2 == HIGH)
    {
      if(val3 == LOW)
      {
        delay(500);
        Serial.println(&quot;R &quot;);
        delay(500);
      }
    }
  }

  if (val1 == HIGH ) // check if the input is HIGH (button released)
  {
    delay(500);
    Serial.println(&quot;F&quot;);
    delay(500);
  }

  if (val1 == LOW)
  {
    if (val2 == HIGH)
    {
      if (val3 == HIGH)
      {
        delay(500);
        Serial.println(&quot;R&quot;);
        delay(500);
      }
    }
  }

}
