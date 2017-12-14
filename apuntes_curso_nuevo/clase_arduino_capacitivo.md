# Sensor capacitivo: Librerías, física y experimentación.

Hasta ahora hemos utilizado nuestro arduino con algunos complementos que vienen prefabricados como input (botones, sensores, etc) y de hecho, están diseñados para encajar perfectamente en nuestro dispositivo. Hoy, sin embargo, vamos a probar algo: crear nuestro propio sensor. Para ello, vamos a explicar de qué trata un sensor capacitivo.

Un sensor capacitivo reacciona al tacto, y hay de muchos tipos. Son muy útiles, y existen algunos muy sensibles diseñados para conectar a arduino. Sin embargo, vamos a usar papel albal para crear el nuestro. Aunque, realmente, es casi igual que los que hemos usado hasta ahora. 

## ¿Qué cambia?

- Necesitaremos una librería. ¿Qué es eso? Es un recurso creado tanto por los fabricantes como por usuarios (en caso de software libre) para expandir las capacidades de nuestro arduino. Tendremos que descargar esta librería y añadirla a arduino.
- en lugar de conectar un sensor, tendremos que colocar papel albal. 
- Tendremos que jugar un poco a ensayo y error en el código usándola herramienta que vimos la clase anterior: Serial Monitor. 

## ¿Qué se mantiene?

- Diseñaremos el circuito casi igual que siempre.
- Haremos poco a poco todas las partes del código desde 0.

## ¿Cómo funciona?


Existen una serie de materiales de nuestro día a día que son conductores de electricidad. ¿Esto que significa? que el material es más o menos propenso a conducir electricidad. Por ejemplo, los metales son, generalmente, muy conductores, mientras que la goma no. Por eso los cables están rodeados de goma, como método de seguridad. El cobre, el oro, el hierro, la plata, el aluminio… Todos ellos son conductores, por ejemplo. Otros materiales como el agua o el grafito (se pueden crear “dibujos” conductores), también. Por eso es tan peligroso bañarse con una toma de electricidad cerca, o un enchufe.



## ¿Qué haremos?

1. Descargar librería

2. Construir el circuito

3. Diseñar el código

4. Probar y calibrar con Serial Monitor. 

5. Experimentar con otro material, por ejemplo, una moneda



## El circuito

Este es nuestro esquema:


![](https://elgatoinquieto.files.wordpress.com/2014/05/touchy-feely-lamp-disec3b1o-de-protoboard.jpg?w=460&h=558)


Y el código (por completar), que escribiremos, sigue el siguiente esquema:

```
//Incluir la librería nueva
#include <CapacitiveSensor.h>
CapacitiveSensor capSensor = CapacitiveSensor(4,2);
//añadir las variables
// variable de límite
// constante del led

void setup() {

    Serial.begin(9600);
   //pinMode(ledPin, OUTPUT);

}

void loop() {
   
   long sensorValue = capSensor.capacitiveSensor(30);

   // imprimimos valor del sensor usando Serial.println(sensorValue);

   //si sensor mayor que el límite…
  // led encendido
  //si no…
  // led apagado
  // esperar 

}

```
Para los profes, aquí está entero:

```
#include <CapacitiveSensor.h>
CapacitiveSensor capSensor = CapacitiveSensor(4,2);

int threshold = 1000;
const int ledPin = 12;

void setup() {

    Serial.begin(9600);
    pinMode(ledPin, OUTPUT);

}//Fin de la funcion setup.

void loop() {

    long sensorValue = capSensor.capacitiveSensor(30);
    Serial.println(sensorValue);
    if(sensorValue > threshold) {
        digitalWrite(ledPin, HIGH);
    }
    else {
        digitalWrite(ledPin, LOW);
    }
    delay(10);

}//Fin de la funcion loop.
```
**Recordatorios:**

Para imprimir en el Serial Monitor: 

`Serial.println(variable);`

Para condicionales:
```
if (condicion) {
	lo que ocurre si se cumple;
}
else {
	lo que ocurre si no se cumple la primera condición;
}
```

Para encender led:
`digitalWrite(nombreLED, HIGH);`

Para apagar led:
`digitalWrite(nombreLED, LOW);`

Para esperas:
`delay(tiempo);`



**Para descargar la librería:**

1. Descargar [CapacitiveSensor04.zip](https://github.com/arduino-libraries/CapacitiveSensor/zipball/master)
2. Buscar en la carpeta (botón derecho, ver en carpeta)
3. Descubrir dónde tenemos guardadas las cosas de arduino (probablemente en Documentos -> arduino -> librerías)
4. Extraer contenido en el punto que descubramos en 3
5. Recargar arduino
6. ¡Listo para usarse!
