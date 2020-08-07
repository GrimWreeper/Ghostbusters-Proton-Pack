//Ghostbusters ION Lights

const int lowestPin = 2;//the lowest one attach to
const int highestPin = 13;//the highest one attach to

/**************************************/
void
setup() //initialize all of the IO pins
{
  for (int thisPin = lowestPin; thisPin <= highestPin; thisPin++)
  {
    pinMode(thisPin, OUTPUT);
  }
}
/****************************************/
void
loop()
{
  for (int thisPin = lowestPin; thisPin <= highestPin; thisPin++)
  {
    digitalWrite(thisPin, HIGH); //turn this led on
    delay(80);
  }
  for (int thisPin = lowestPin; thisPin <= highestPin; thisPin++)
  {
    digitalWrite(thisPin, LOW); //turn this led off
  }
}
