Apuntes de programación
Como decíamos en la clase anterior, los ordenadores son “tontos“ y hacen lo que nosotros les digamos. El buen funcionamiento de un programa va a depender de lo bien que lo haga un programador.

Condicionales
En la clase anterior empezamos a ver Scratch, e hicimos que el gatito se moviera una serie de pasos que nosotros le decíamos, o que maullara. Además comenzamos los condicionales.
Hagamos un pequeño recordatorio. ¿Cómo funcionan los condicionales?
Siguen la siguiente estructura:
SI PASA X
HAZ Y
Por ejemplo, tu madre te da dinero y te dice “quiero que compres un libro de misterio” y tú vas a la librería, y te plantas delante de las novelas. Coges un libro y te preguntas “¿es este libro de misterio?” SI la respuesta es sí, lo cogeremos, y si no, no.
Fácil, ¿verdad? pues en programación es lo mismo.

si [2<3] entonces
camina 10 pasos
Sin embargo, ¿De qué sirve hacer esto si ya sabemos que 2 es menor a 3? Porque en realidad usaremos variables.
Las variables son valores, por ejemplo, números, que pueden cambiar, y los reconocemos por un nombre. En mates funciona exactamente igual. Por ejemplo:
Si tenemos manzanas = 20, pero nos regalan 3 manzanas, el valor de manzanas será 20 + 3, es decir, tendremos manzanas = 23. El valor de “manzanas” ha cambiado.
En Scratch podemos crear variables, para ello hay un bloque especial.
Para nuestro condicional ahora, necesitaremos un tipo de variable especial llamada “boolean“, que sólo pueden ser de dos tipos, verdadera o falsa.
¿Recuerdas el binario? Estuvimos convirtiendo números decimales a binario (ceros y unos). El ordenador, salvo que se le indique lo contrario, entenderá que 1 = verdadero y que 0 = falso.
¿Qué haremos con esto? Vamos a seguir una serie de pasos.
Creamos una variable llamada x, la colocamos en algún lugar del editor.
Arrastramos el bloque “Comenzar cuando pulsemos la bandera” del apartado Eventos.
Arrastramos el bloque “pedir valor” 
Arrastramos el bloque condicional y lo enganchamos al de “comenzar cuando pulsamos la bandera”
Al comenzar el programa nos pedirá el valor de x, y depende de lo que escribamos, si 0 ò 1 (falso o verdadero), hará la acción o no.
¿Qué ocurre si queremos que haga más de una acción? Podemos usar más condicionales. En el apartado de Control está también esa opción. ¿Que diferencia hay? Te pongo un ejemplo:
¿Recuerdas el ejemplo donde ibas a comprarle un libro de misterio a tu madre? Pues imagina ahora que te ha dicho, además “Si no hay un libro de misterio, compra una novela romántica”.
Así que ahora tienes una segunda orden si la primera condición no se cumple.
Y de la misma forma, podemos poder las condiciones que queramos.
Bucles
En la última clase usamos el “repetir x veces”, e hicimos que el gato maullará 5 veces. A eso se le llama bucle, porque repite una acción tantas veces como le digamos. Como hemos hecho con los condicionales, podemos usar variables.
Además de “repetir x veces” podemos usar el “repetir mientras pase x”, es decir, usamos una condición. También existe “repetir hasta que pase x”. Por ejemplo:
Imagina que te has comprado una bolsa de chuches, y te la quieres comer entera. Te dices a ti mismo “Mientras haya chuches en la bolsa, seguiré comiendo“.
O también podrías decir “Hasta que no queden chuches en la bolsa seguiré comiendo“. ¡Pues programando, es igual!
Vamos a probar a hacer las siguientes actividades en Scratch usando los bucles del apartado “Control”.
Caminar 20 pasos adelante, esperar 1 segundo y caminar 20 pasos atrás mientras la variable x sea menor que 5.
Caminar 20 pasos adelante, esperar 1 segundo y caminar 20 pasos atrás hasta que x sea divisible entre 3
Otras opciones de Scratch
Además de éstas opciones de control, Scratch puede reconocer colores, objetos, botones, de forma que podemos crear algo más complejo.
Analizaremos el ejemplo que he preparado para la clase, con varias opciones, e intentaremos hacer algo parecido desde 0. Una vez que aprendamos las opciones básicas, podemos hacer juegos o editar los de otros.
Scratch tiene una versión llamada S4A (Scratch for Arduino) que te permite programar con este mismo sistema una placa de Arduino.

¿Qué es Arduino?
Es una placa cuadrada pequeña (cabe en la palma de una mano) diseñada para que se le puedan conectar leds, sensores, motores, etc para diseñar robots sencillos y otros proyectos de Hardware. Pero esta placa tiene algo aún más guay, y es que es Hardware libre.
Esto significa, que a diferencia de la mayoría de dispositivos electrónicos que puedes ver en tu día a día, los planos y el funcionamiento electrónico de Arduino es público y gratuito, para que cualquiera pueda leerlo, mejorarlo o editarlo.
