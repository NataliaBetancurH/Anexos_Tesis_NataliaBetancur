// Natalia Betancur Herrera
// Laser Panasonic HG-C1030
// 26 junio 2023

#include <SoftwareSerial.h>

const byte rxPin = 10;
const byte txPin = 11;
SoftwareSerial hc05 (rxPin, txPin);

double salida;
double serialhgC;
double serial;

void setup() {
  // put your setup code here, to run once:
  pinMode(rxPin, INPUT);
  pinMode(txPin, OUTPUT);
  Serial.begin(9600);
  hc05.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //if (hc05.isListening()) {
   // Serial.println("El puerto Uno esta a la escucha!");
 //}
  serialhgC = analogRead(A0);
  serial = hc05.read();
  salida = map(serialhgC, 518,1023,0.0,5.0);
  // Serial.println(serialhgC, DEC);    // imprime como un ASCII-codificado decimal
  Serial.println(salida,2);
    // Serial.println(serial);
  // Serial.print("\t"); 
  delay(100);
}
