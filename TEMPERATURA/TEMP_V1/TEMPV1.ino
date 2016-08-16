/*
LM35 10mV X °C => 100°C -> 1.0V
RANGO 0-100°C 
LA REFERENCIA DEL A/D ES 5V y LM35 PUEDE ENTREGAR 1V MAXIMO A 100°C
*/

float tempC;
int lectura;

void setup()
{
Serial.begin(115200);
}

void loop()
{
lectura = analogRead(A0);
tempC = (lectura/1023.0)*5.0*100;
Serial.println(tempC);
Serial.println();
delay(1000);
}
