
#Resumen SENSOR DE LUZ

##Sensor digital de luz BH1750

Módulo para la medición de la intensidad de luz, generalmente aplicado en medición de luz ambiente. Contiene el circuito integrado especializado y otros componentes de interfaz.

El control y salida de datos es por medio de una interfaz de interconexión denominada I2C que permite configurar una verdadera red de dispositivos, tanto en el modo Maestro / Esclavo como Multi-Maestro / Multi-Esclavo. 

![](./bh1750.jpg)

###Diagrama en bloques

![](./bh1750_block.jpg)

###Comandos

![](./bh1750_instrucciones.jpg)

###Caracteristicas Técnicas

Interfaz digital a través de bus I2C con capacidad de seleccionar entre 2 direcciones

Respuesta espectral similar a la del ojo humano

Reliza mediciones de luz y convierte el resultado a una palabra digital

Amplio rango de medición 1-65535 lux

Modo de bajo consumo de energía

Rechazo de ruido a 100/120 Hz

Baja dependencia de la medición contra la fuente de luz: halógeno, led, incandescente, luz de día, etc.

La influencia del espectro infrarojo es baja.

Voltaje de alimentación desde 3.3v hasta 5v

##Interfaz digital I2C

Diagrama de interconexión de dispositivos compatibles con I2C

![](./I2C.jpg)

Diagrama temporal del protocolo I2C

![](./i2c.png)

##PRÁCTICA: Medición de intensidad de luz en LUX (Luxómetro)

DIAGRAMA DE CONEXIONES

La asignación de terminales en ARDUINO es: A4 (SDA) A5 (SCL)

PROGRAMA

[LIBRERIA](https://github.com/Genotronex/BH1750FVI_Master)
