#include <Servo.h>

Servo barrera;

// Variables: pines
const int TRIG = 9;
const int ECHO = 10;
const int PIN_SERVO = 6;
const int LED_VERDE = 4;
const int LED_ROJO = 3;

// Variables configurables
int distanciaDeteccion = 20;   // cm
int anguloCerrada = 0;
int anguloAbierta = 90;
int tiempoSeguridad = 3000;    // ms que espera antes de cerrar
int anguloActual = 0;

void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_ROJO, OUTPUT);
  barrera.attach(PIN_SERVO);
  barrera.write(anguloCerrada);
  digitalWrite(LED_ROJO, HIGH);
  Serial.begin(9600);
}

// Mide la distancia en cm
long medirDistancia() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  long duracion = pulseIn(ECHO, HIGH, 30000);
  if (duracion == 0) return 999;      // Condicional: sin lectura
  return duracion * 0.034 / 2;
}

// Bucle for: mueve el servo grado a grado (movimiento suave)
void moverBarrera(int destino) {
  if (destino > anguloActual) {
    for (int a = anguloActual; a <= destino; a++) {
      barrera.write(a);
      delay(15);
    }
  } else {
    for (int a = anguloActual; a >= destino; a--) {
      barrera.write(a);
      delay(15);
    }
  }
  anguloActual = destino;
}

void loop() {
  long distancia = medirDistancia();
  Serial.println(distancia);

  if (distancia < distanciaDeteccion) {      // Condicional: hay vehículo
    digitalWrite(LED_ROJO, LOW);
    digitalWrite(LED_VERDE, HIGH);
    moverBarrera(anguloAbierta);

    // Bucle while: espera mientras el vehículo siga presente
    while (medirDistancia() < distanciaDeteccion) {
      delay(200);
    }

    delay(tiempoSeguridad);                  // tiempo para que termine de pasar
    moverBarrera(anguloCerrada);
    digitalWrite(LED_VERDE, LOW);
    digitalWrite(LED_ROJO, HIGH);
  }

  delay(100);
}   