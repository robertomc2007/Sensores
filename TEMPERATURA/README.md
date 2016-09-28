#Resumen SENSOR DE TEMPERATURA

##Sensor Analógico LM35

![LM35](./LM35.png)

##PRÁCTICA: Conexión a una entrada analógica del procesador

DIAGRAMA

PROGRAMA

#define sensorPin A0
 
void setup()
{
  Serial.begin(9600);
}
 
void loop()
{
  int value = analogRead(sensorPin);
  float millivolts = (value / 1023.0) * 5000;
  float celsius = millivolts / 10; 
  Serial.println(celsius);
  delay(1000);
}
