// C++ code
//
void setup()
{
  pinMode(2, INPUT); // el pin 2 es una entrada
  pinMode(6, OUTPUT); // el pin 6 como salida(led)
  pinMode(9, OUTPUT); // el pin 9 como salida (altavoz)
}

void loop()//es una funcion de bucle 
{
  if (digitalRead(2) == HIGH) { // si la funcion lee el pin 2 como activado 
    
    digitalWrite(6, HIGH);// prender el led del pin 6 
    tone(9, 523, 1000); // si el elled està prendido encender el altavboz del pin 9
  } else { // si no
    digitalWrite(6, LOW); // si el led del pin 6 esta apagado
    noTone(9);// no prender el alatavoz
  }
  delay(10); // esperar 10 segundos
}
