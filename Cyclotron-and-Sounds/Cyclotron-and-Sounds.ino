
//GB Cyclotron lights and sounds

#include <SPI.h>
#include <SdFat.h>
#include <SdFatUtil.h>

//and the MP3 Shield Library
#include <SFEMP3Shield.h>

//create and name the library object
SFEMP3Shield MP3player;


void setup() {

  Serial.begin(115200);
  MP3player.begin();
  MP3player.SetVolume(0,0);
  MP3player.playTrack(1);
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);

  digitalWrite(A0, HIGH);
  delay(500);
  digitalWrite(A1, HIGH);
  delay(500);
  digitalWrite(A2, HIGH);
  delay(500);
  digitalWrite(A3, HIGH);
  digitalWrite(A4, HIGH);

}

void loop() {

  digitalWrite(A0, HIGH);
  delay(500);
  digitalWrite(A0, LOW);
  digitalWrite(A1, HIGH);
  delay(500);
  digitalWrite(A1, LOW);
  digitalWrite(A2, HIGH);
  delay(500);
  digitalWrite(A2, LOW);
  digitalWrite(A3, HIGH);
  delay(500);
  digitalWrite(A3, LOW);
}
