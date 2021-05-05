#define VERDE 2
#define AMARILLO 3
#define ROJO 4
int espera = 1000;
void setup() 
{
 pinMode(VERDE,OUTPUT);
 pinMode(AMARILLO,OUTPUT);
 pinMode(ROJO,OUTPUT);
}

void loop()
{
  espera=espera - 80;
  if(espera<100)
  {
    espera = 10000;
  }
  else
  {
    digitalWrite(VERDE,HIGH);
    delay(espera);
    digitalWrite(VERDE,LOW);
    digitalWrite(AMARILLO,HIGH);
    delay(espera);
    digitalWrite(AMARILLO,LOW);
    digitalWrite(ROJO,HIGH);
    delay(espera);
    digitalWrite(ROJO,LOW);
  
  }

}
