//Natalia Betancur 
//Sensor MPU 6050
//25 junio 2023

// Librerias
#include "I2Cdev.h"
#include "MPU6050.h"
#include "Wire.h"


MPU6050 sensor;

// Inicializacion del acelerometro y giroscopio en los ejes x,y,z
int ax, ay, az;
int gx, gy, gz;



void setup() {
  Serial.begin(9600);    // nicializacion puerto serial
  Wire.begin();           // Inicializacion I2C  
  sensor.initialize();    // Inicializacion del sensor


// Condicional de error
  if (sensor.testConnection()) Serial.println("Sensor iniciado correctamente");
  else Serial.println("Error al iniciar el sensor");
}

void loop() {
  // Leer las aceleraciones y velocidades angulares
  sensor.getAcceleration(&ax, &ay, &az);
  sensor.getRotation(&gx, &gy, &gz);

  //Mostrar las lecturas separadas por coma
  // Serial.print("a[x y z] g[x y z]:\t");
  Serial.print(ax); Serial.print(",");
  Serial.print(ay); Serial.print(",");
  Serial.print(az); Serial.print(",");
  Serial.print(gx); Serial.print(",");
  Serial.print(gy); Serial.print(",");
  Serial.println(gz);

  delay(100);
}
