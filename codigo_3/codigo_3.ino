// C++ code
//
int i = 0;// entero i es igual a cero

int j = 0;// entero j es igual cero 

int k = 0;// entero k es igual cero

int m = 0;// entero es igual a cero

void setup()// funcion que define que voy a usar
{
  Serial.begin(9600);// instruccion que indica comunicacion con la compu con una velocidad de 9600 bits por segundo

}

void loop()//funcion bucle
{
  for (i = 0; i <= 360; i += 1) { 
    Serial.println(i);// para observar los datos producidos en el programa
    delay(20); // espera dos milisegundos
  }
}
