# Programación en Python y linux

El último día estuvimos revisando los conceptos básicos de programación y hablamos de Python, un lenguaje de programación que es flexible y de alto nivel. 

Hoy vamos a ir un paso más allá. Vamos a utilizar linux y la terminal de linux en conjunto con python. Vamos a recordar brevemente los comandos simples de la terminal.

La terminal de linux nos permite navegar entre nuestras carpetas (directorios) y archivos, como si lo hiciéramos con el soporte visual.

La carpeta principal donde empezamos (la básica en la terminal) es HOME. desde HOME podemos acceder a Descargas, Documentos, etc. Si escribimos 

		ls
		
podremos ver todos los directorios y archivos en la carpeta actual (en este caso HOME)

		cd directorio
		
nos permite entrar en el directorio. Por ejemplo:

		cd Documentos
nos permite entrar en Documentos.

Como estos, existen muchos comandos, que podemos consultar en nuestro _cheatsheet_ , pero por ahora, vamos a seguir los siguientes pasos:

		cd
Para meternos en Home

		mkdir clase
		
Para crear un directorio de clase

		cd clase
		
Para entrar en el directorio _clase_

		touch hola.py
		
para creat un archivo llamado hola.py (el .py significa que lo  que escribamos será en python) 

		gedit hola.py &
para editar nuestro archivo. El & nos permite tener disponible la terminal mientras usamos el editor de texto. Básicamente significa "usemos a la vez la terminal y lo que te estoy pidiendo que abras".

Ahora nos saldrá un editor de texto. Dentro de dicho editor, escribiremos:

		print("¡Hola mundo!")
		
guardamos. (archivo -> guardar ò ctrl+s)

Cerramos gedit, volvemos a la terminal y escribimos:

		python hola.py


**¿Qué ocurre?**
Lo que está ocurriendo aquí es que hemos escrito en un lenguaje (python) un saludo y le hemos dicho al ordenador que lo lea y ejecute el resultado. Como no hay ningún error, nos muestra el mensaje que habíamos escrito. Ésta es una de las ventajas de linux, nos da muchas facilidades para "compilar" y "ejecutar" (lo que acabamos de hacer con el saludo) en varios lenguajes de programación.

Ahora creemos otro programa:

		touch ejemplo.py
		
Y editemoslo:
		
		gedit ejemplo.py
		
Dentro del archivo escribimos:

		x = 1
		if x == 1:
    		# ojo con la tabulación
    		print("x is 1.")
    		
Guardamos el archivo y volvemos a la terminal.

		python ejemplo.py
		
En este caso el resultado también es una frase, pero esta vez, al _compilarlo_ el ordenador ha tenido que hacer una _condición_ para comprenderlo. 

¿Qué ventajas tiene esto sobre un editor-compilador normal visual?

De primeras puede parecernos que nos complica la vida, pero ésta es la forma más correcta de hacerlo, puesto que en un futuro, creando proyectos más grandes, nos permite trabajar y organizarlo todo en el directorio que queramos. Nos permite, además, tener mucho más control de lo que ocurre.

Podemos llamar a otros programas llamados MÓDULOS en un programa, para dividir el trabajo. Esto es muy usado en informática para trabajar ordenadamente. **Es como dividir una herramienta grande en muchas.**

**¿Qué vamos a hacer para probarlo?**

1. Crear un archivo que se llame A.py (recuerda, **touch A.py**)
2. Escribir dentro (recuerda **gedit A.py**):

		ejemplo = "abcde"
		
3. Guardar dicho archivo, salir. 
4. Crear un archivo que se llame B.py
5. Dentro escribimos:

		import A.py
		
		len(ejemplo)
		print(ejemplo[1])
		print(ejemplo[1:3])
		print(ejemplo[2:])
	
Cuestiones: 	
_¿Qué está ocurriendo aquí?_
_¿Qué ventajas tiene usar varios "módulos" en nuestro código?_
_¿Por qué el 1 devuelve b y no a?_ 

**Vamos a probar otro ejemplo con "listas" (como ejemplo)**

1. Creamos un archivo llamado C.py
2. Escribimos dentro:

		lista1 = 'abc'
		lista2 = 'def'
		lista3 = 'ghi'
		
		lista = lista1 + lista2 + lista3
		ejemplo = lista1 + lista2
		ejemplo2 = lista1 + lista3
3. Guardamos.
4. Antes de ejecutarlo, ¿Qué crees que sucederá?
5. Ejecútalo, en terminal escribe:
		python C.py
		
Hemos visto hasta ahora:

- Gramática esencial de python
- _Tips_ para compilarlo y ejecutarlo desde terminal de linux
- Módulos en pyhton y sus ventajas



 

 