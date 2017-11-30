# ¿Monitor Serie?

En otras clases hemos mencionado algo llamado **Serial Monitor**, que podemos encontrar en arduino. Serial monitor es una especie de terminal que podemos configurar para que imprima datos, mensajes, etc. Es muy útil para corregir código y calibrar complementos.

En este caso vamos a aprovechar el Serial Monitor para comprender mejor el uso del Sensor de Luz. Para realizar nuestro experimento vamos a necesitar:

- Sensor de luz
- Cables
- Resistencia marrón-negra-amarilla(o naranja)-dorada
- Arduino
- Protoboard
- Cable amarillo

Y conectaremos nuestros elementos de la siguiente manera:

![](https://github.com/terceranexus6/clases_con_rafa/blob/master/apuntes_curso_nuevo/images/2017-11-30%2016_22_40-Arduino%20Monitor%20-%20Entender%20la%20comunicaci%C3%B3n%20con%20el%20arduino%20-%20Documentos%20de%20Google.png?raw=true)

Antes de comenzar a escribir el código, **cósas a comprender**:

**LDR** (sensor de luz), juega con una resistencia y la intensidad de la luz. Cuanto mayor sea la intensidad lumínica, mayor es la resistencia. Éstos son el símbolo que se utiliza en los circuitos escritos para indicar el uso de una resistencia y la gráfica que representa su funcionamiento, respectivamente:

![](https://github.com/terceranexus6/clases_con_rafa/blob/master/apuntes_curso_nuevo/images/2017-11-30%2016_22_51-Arduino%20Monitor%20-%20Entender%20la%20comunicaci%C3%B3n%20con%20el%20arduino%20-%20Documentos%20de%20Google.png?raw=true)

En el caso de arduino, al ser un sensor, utilizaremos la señal analñogica, el hueco de pins señalizado con Analog que va de A0 a A5. En nuestro ejemplo, lo hemos colocado en A0 pero podemos colocarlo donde sea. 

    int sensorPin = A0;

Como ya hemos dicho que usaremos un valor analógico usaremos para leer el contenido de nuestro sensor una función llamada “Lectura analógica” que se escribe así:

    analogRead(sensorPin)
    
Eso, por ahora, es lo que debemos saber del sensor. Ahora vamos a comprender  la función del serial Monitor. Para abrirlo, cuando lo tengamos todo listo, tan sólo tenemos que ir a **Herramientas -> Monitor Serie**

![](https://github.com/terceranexus6/clases_con_rafa/blob/master/apuntes_curso_nuevo/images/2017-11-30%2016_22_59-Arduino%20Monitor%20-%20Entender%20la%20comunicaci%C3%B3n%20con%20el%20arduino%20-%20Documentos%20de%20Google.png?raw=true)

Y nos proporcionará la información que le pidamos con Serial.println(lo_que_sea) de forma que podemos leer el contenido de un sensor, que es lo que vamos a hacer. 

Vamos a construir el código base de cero, y lo comparamos con el final. La estructura es la siguiente:

```
//Variable del sensor (¿a qué pin está conectado?)
//Variable donde guardamos el contenido del sensor

void setup(){
Serial.begin(9600);
}

void loop(){
//variable del contenido del sensor igual a la función analógica
//imprimir una frase en nuestro monitor, tipo “Aquí va la lectura de nuestro sensor: ”
//imprimir en el monitor el valor del sensor
//esperar 1 segundo
}
```

**¿Qué vamos a hacer?**

I-  Hacer el circuito
II- Construir el código
II- Comprobar que nuestro monitor funciona bien
IV- En base a nuestro experimento implementaremos un led, que se encenderá cuando haya poca luz.

