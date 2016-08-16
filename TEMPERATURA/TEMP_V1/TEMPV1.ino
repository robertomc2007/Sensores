/*
LM35 10mV X °C / 0-100°C
*/

float tempC;
int lectura;

void setup()
{

//LA REFERENCIA ES 5V

Serial.begin(115200);
}

void loop()
{
lectura = analogRead(A0);
tempC = (5.0 * lectura * 100.0) / 1024;
Serial.println(tempC);
delay(1000);
}
