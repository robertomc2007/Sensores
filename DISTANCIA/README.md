#Resumen SENSOR DE DISTANCIA

##Sensor de distancia por ultrasonido SR04

El HC-SR04 es un sensor de distancias por ultrasonidos capaz de detectar objetos y calcular la distancia a la que se encuentra en un rango de 2 a 450 cm. El sensor funciona por ultrasonidos y contiene toda la electrónica encargada de hacer la medición. Su uso es tan sencillo como enviar el pulso de arranque y medir el ancho o duración del pulso de retorno. De muy pequeño tamaño, el HC-SR04 se destaca por su bajo consumo, gran precisión y bajo precio.

![SR04](./HCSR04.jpg)

##Características

Dimensiones del circuito: 43 x 20 x 17 mm

Tensión de alimentación: 5 Vcc

Frecuencia de trabajo: 40 KHz

Rango máximo: 4.5 m

Rango mínimo: 1.7 cm

Duración mínima del pulso de disparo (nivel TTL): 10 μS.

Duración del pulso eco de salida (nivel TTL): 100-25000 μS.

Tiempo mínimo de espera entre una medida y el inicio de otra 20 mS.


###Pines de conexión:

VCC (+5 Volt)

Trig (Disparo del ultrasonido)

Echo (Eco o Recepción del ultrasonido)

GND

##Funcionamiento

El módulo dispone de emisor y receptor de ultrasonido, así como los circuitos para enviar un sonido de alta frecuencia y amplificar la recepción del eco. Esta recepción es acondicionada como una salida de estado binario de tiempo variable. El tiempo del pulso de salida es proporcional al tiempo de retorno del sonido emitido.

El siguiente diagrama de señales en el tiempo resume el proceso

![TIEMPOS](./Diagrama-de-tiempo-HC-SR04.png)

###Ecuación de conversión

Distancia = {(Tiempo entre Trig y el Eco) * (V.Sonido 340 m/s)}/2

#PRACTICA: Conexión para medición de distancia

DIAGRAMA DE CONEXIÓN

PROGRAMA

long tiempo;

int disparador = 7;   // triger

int entrada = 8;      // echo

float distancia;

void setup()

{

  pinMode(disparador, OUTPUT);
  
  pinMode(entrada, INPUT);
  
  Serial.begin(115200);
  
}

void loop()

{
  // lanzamos un pequeño pulso para activar el sensor
  
  digitalWrite(disparador, HIGH);
  
  delayMicroseconds(10);
  
  digitalWrite(disparador, LOW);
  
  // medimos el pulso de respuesta
  
  tiempo = (pulseIn(entrada, HIGH)/2); // dividido por 2 por que es el 
  
                                       // tiempo que el sonido tarda
                                       
                                       // en ir y en volver
                                       
  // ahora calcularemos la distancia en cm
  
  // sabiendo que el espacio es igual a la velocidad por el tiempo
  
  // y que la velocidad del sonido es de 343m/s y que el tiempo lo 
  
  // tenemos en millonesimas de segundo
  
  distancia = float(tiempo * 0.0343);
  
  // y lo mostramos por el puerto serie una vez por segundo
  
  Serial.println(distancia);
  
  delay(1000);
  
}
