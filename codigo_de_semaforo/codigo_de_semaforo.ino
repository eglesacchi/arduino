// C++ code
//
void setup()// funcion que define que voy a usar en el circuito
{
  pinMode(2, OUTPUT);// define el pin 2 como salida (led verde)
  pinMode(5, OUTPUT);// define el pin 5 como salida (led rojo)
  pinMode(6, OUTPUT);// define el pin 6 como salida (led amarillo)
  pinMode(3, OUTPUT);// define el pin 3 como salida (otro led amarillo)
  pinMode(4, OUTPUT);// define el pin 4 como salida (otro led rojo)
  pinMode(7, OUTPUT);// define el pin 7 como salida (otro led verde)
}

void loop()// funcion de bucle
{
  digitalWrite(2, HIGH);// led del pin 2 prendido 
  digitalWrite(5, HIGH);// encender el led del pin 5 
  delay(10000); // Wait for 10000 millisecond(s)// esperar 10 segundos
  digitalWrite(2, LOW);// apagar led del pin 2 
  digitalWrite(6, HIGH);// prender el led del pin 6 
  digitalWrite(3, HIGH);// encender el led del pin 3 
  delay(2000); // Wait for 2000 millisecond(s)// esperar 2 segundos
  digitalWrite(3, LOW);// apagar led del pin 3
  digitalWrite(4, HIGH);// encender el led del pin 4
  digitalWrite(7, HIGH);// encender el led del pin 7
  delay(10000); // Wait for 10000 millisecond(s)// esperar 10 segundos
  digitalWrite(4, LOW);// apagar led del pin 4
  digitalWrite(7, HIGH);// encender el led del pin 7
  delay(1000); // Wait for 1000 millisecond(s)// esperar un segundo
  digitalWrite(7, LOW);// apagar el led del pin 7 
}
