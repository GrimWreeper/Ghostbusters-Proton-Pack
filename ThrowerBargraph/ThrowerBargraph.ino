//Ghostbusters Thrower lights
//This code assumes you're using a 10 pin LED Bargraph connected directly to Digital IO on Arduino.

const int lowestPin = 3;//the lowest one attach to
const int highestPin = 12;//the highest one attach to
/**************************************/
void setup() //initialize all of the IO pins
{
  for (int thisPin = lowestPin; thisPin <= highestPin; thisPin++)
  {
    pinMode(thisPin, OUTPUT);
  }

  for (int thisPin = lowestPin; thisPin <= highestPin; thisPin++)
  {
    digitalWrite(thisPin, HIGH); //turn this led on
    delay(100);
  }

  for (int thisPin = lowestPin; thisPin <= highestPin; thisPin++)
  {
    digitalWrite(thisPin, LOW); //turn this led off
    delay(100);
  }
}
/****************************************/
void loop()
{
  for (int i = 0; i<=4; i++)
  {
    animation1();
  }

  for (int i = 0; i<=5; i++)
  {
    animation2();
  }
}

void animation1()
{
    for (int thisPin = lowestPin; thisPin <= highestPin; thisPin++)
  {
    digitalWrite(thisPin, HIGH); //turn this led on
    delay(80);
  }

  for (int thisPin = highestPin; thisPin >= lowestPin; thisPin--)
  {
    digitalWrite(thisPin, LOW); //turn this led off
    delay(80);
  }
}


void animation2()
{
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  delay(100);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);

  digitalWrite(5, HIGH);
  digitalWrite(10, HIGH);
  delay(100);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);

  digitalWrite(4, HIGH);
  digitalWrite(11, HIGH);
  delay(100);
  digitalWrite(5, LOW);
  digitalWrite(10, LOW);

  digitalWrite(3, HIGH);
  digitalWrite(12, HIGH);
  delay(100);
  digitalWrite(4, LOW);
  digitalWrite(11, LOW);  

  digitalWrite(3, LOW);  
  digitalWrite(12, LOW);  
}
