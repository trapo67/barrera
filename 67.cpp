int rojo = 8;
int amarillo = 9;
int verde = 10;//variables
void setup() {
pinMode(rojo, OUTPUT);
pinMode(amarillo, OUTPUT);
pinMode(verde, OUTPUT);
}
void loop() {//bucle
// Verde encendido
digitalWrite(verde, HIGH);
digitalWrite(amarillo, LOW);
digitalWrite(rojo, LOW);//condicional
delay(5000);
// Amarillo encendido
digitalWrite(verde, LOW);
digitalWrite(amarillo, HIGH);
delay(2000);

// Rojo encendido
digitalWrite(amarillo, LOW);
digitalWrite(rojo, HIGH);
delay(5000);
}