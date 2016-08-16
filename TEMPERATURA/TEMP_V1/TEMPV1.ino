/*
LM35 10mV X °C / 0-100°C

LA REFERENCIA ES 5V y LM35 PUEDE ENTREGAR 1V MAXIMO A 100°C
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
//tempC = (5.0 * lectura * 100.0) / 1024;
tempC = map(lectura*1.0, 0.0, 1023.0, 0.0, 100.0);
Serial.println(tempC);
delay(1000);
}
