// Variables: pines
const int ROJO = 13;
const int AMARILLO = 12;
const int VERDE = 11;
const int BOTON = 2;

// Variables: tiempos en segundos
int tiempoVerde = 6;
int tiempoVerdeCorto = 2;
int tiempoRojo = 5;
bool peatonSolicitado = false;

void setup() {
  pinMode(ROJO, OUTPUT);
  pinMode(AMARILLO, OUTPUT);
  pinMode(VERDE, OUTPUT);
  pinMode(BOTON, INPUT_PULLUP); // presionado = LOW
}

// Bucle for: espera revisando el botón cada 100 ms
void esperar(int segundos) {
  for (int i = 0; i < segundos * 10; i++) {
    if (digitalRead(BOTON) == LOW) {   // Condicional
      peatonSolicitado = true;
    }
    delay(100);
  }
}

void apagarTodo() {
  digitalWrite(ROJO, LOW);
  digitalWrite(AMARILLO, LOW);
  digitalWrite(VERDE, LOW);
}

void loop() {
  // VERDE
  apagarTodo();
  digitalWrite(VERDE, HIGH);
  esperar(tiempoVerdeCorto);            // tiempo mínimo
  if (!peatonSolicitado) {              // Condicional
    esperar(tiempoVerde - tiempoVerdeCorto);
  }

  // AMARILLO parpadeando 3 veces (bucle for)
  apagarTodo();
  for (int i = 0; i < 3; i++) {
    digitalWrite(AMARILLO, HIGH);
    delay(400);
    digitalWrite(AMARILLO, LOW);
    delay(400);
  }

  // ROJO
  digitalWrite(ROJO, HIGH);
  peatonSolicitado = false;
  delay(tiempoRojo * 1000);
}