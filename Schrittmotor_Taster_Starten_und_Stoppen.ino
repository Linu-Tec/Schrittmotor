// https://funduino.de/nr-15-schrittmotor

#include <Stepper.h>
int SPU = 2048;
Stepper Motor(SPU, 3,5,4,6);  // IN4, 2, 3, 1 
int Taster=8; // Taster an Pin8
int Tasterstatus=0; // Variable für den Status des Tasters

void setup(){
Motor.setSpeed(5);
pinMode(Taster, INPUT);
}

void loop() {
Tasterstatus=digitalRead(Taster); //Zunächst wird der Taster abgefragt.
while(Tasterstatus == HIGH) //Solange der Wert des Tasters HIGH, also gedrückt ist...
 {
  delay(1); //...springt der Sketch in diese Klammer und verbleibt hier.
 } //Wenn der Taster jedoch nicht mehr gedrückt ist, springt der Sketch in den regulären Loop zurück und führt dort weitere Befehle aus.
Motor.step(1); //...drehe den Motor um einen Schritt.
} //Jetzt beginnt der Sketch von vorn. Solange der Taster nicht gedrückt ist, wird die "While" Funktion nicht ausgeführt und der Motor dreht sich Schritt für Schritt weiter
