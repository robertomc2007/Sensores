float tempC;
int lectura;

void setup()
{

//analogReference(INTERNAL);

Serial.begin(115200);
}

void loop()
{
lectura = analogRead(A0);
tempC = (lectura*1.0) / 9.31;
Serial.println(tempC);
delay(1000);
}
