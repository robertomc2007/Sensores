float tempC;
int lectura;

void setup()
{

//REFERENCIA DE 1,1V
analogReference(INTERNAL);

Serial.begin(115200);
}

void loop()
{
lectura = analogRead(A0);
tempC = lectura / 9.31;
Serial.println(tempC);
delay(1000);
}
