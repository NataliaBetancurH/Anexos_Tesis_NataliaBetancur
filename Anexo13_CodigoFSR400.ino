// Natalia Betancur Herrera
// Sensor de Fuerza resistiva 
// 27 junio 2023


// Inicializacion de variables
int pin_lectura = A0;
int valor;
int voltaje;

void setup() {
  Serial.begin(9600);
}

void loop() {

  // Lectura canal analogico
  valor = analogRead(pin_lectura);

  Serial.println(valor);


  delay(100);
}
