1. Preprocesador
	a. Se escribió el archivo hello2.c

	b. El comando utilizado para preprocesar fue: gcc -E hello2.c -o hello2.i
	Al preprocesar hello2.c se interpreta el contenido de los include, en este caso stdio.h. Además, los comentarios se reemplazan con un espacio en blanco. 
	Al final del archivo se encuentra nuestro codigo, aunque ahora ya sin el comentario. 

	c. Se escribió el archivo  hello3.c

	d. La semantica de la primera linea es invocar a la funcion printf() con el parametro "const * 
	char restrict s", el cual permite que la funcion no se preocupe por el cambio de formato de cadena.
	
    e. El comando utilizado para preprocesar fue: gcc -E hello3.c -o hello3.i 
	   En el archivo hello3.i se encuentran las siguientes lineas que no se encontraban en hello3.c: 
	   # 1 "hello4.c"
	   # 1 "<built-in>"
	   # 1 "<command-line>"
	   # 1 "hello4.c"
	

2. Compilación
	a. El comando utilizado para compilar fue:  gcc -Wall -S hello3.i
	
	b. Se escribió el archivo hello4.c
	Por otro lado, El comando utilizado para compilar fue:  gcc -Wall -S hello4.i
	
	c. Un ensamblador traduce pero no reduce el nivel de abstracción. El lenguaje ensamblador permite traducir el código que en nuestro caso se encuentra en lenguaje C, a instrucciones o nemónicos que son entendibles por el programador y además fáciles de recordar.
	Es mas facil acordarse por ejemplo de push, antes que acordarse del código asociado para el push. Aunque sigue siendo de bajo nivel, es mas fácil de entender. 
	
	d. El comando utilizado para ensamblar fue: gcc -c hello4.s -o hello4.o
	
3. Vinculación
	a. El comando utilizado para vincular fue: gcc -o hello4 hello4.o
	
	b. En el archivo hello5.c se reemplazó la invocación de la función prontf, por printf. 
	
	c. El comando utilizado fue: gcc hello5.c -o hello5 
								 hello5.exe
	   Al ejecutar el programa, se visualiza el contenido de s, nuestra constante char*
	   definida en printf.
	   
	   	   
4. Correción de Bug
	a. Se corrigió el bug en la invocación a printf().
	Luego, se ejecutaron los siguientes comandos: gcc -E hello6.c -o hello6.i
												  gcc -Wall -S hello6.i
												  gcc -c hello6.s -o hello6.o
												  gcc -o hello6 hello6.o
												  hello6.exe
												  
	Por pantalla se obtuvo el mensaje: "La respuesta es 42"

	
5. Remoción de prototipo
	a. Se generó el archivo hello7.c
	
	b. El programa funciona porque no es necesario tener la linea "#include  <stdio.h>" ni tampoco definir a printf. La declaración anuncia pero no genera código. Cabe aclarar que a pesar de visualizar el resultado esperado, tambien se observa un warning que indica la declaración implícita de la función printf().
	

6. Compilación Separada: Contratos y Módulos
	a. Se crearon los archivos studio1.c y hello8.c. 
	
    b. Se ejecutaron los siguientes comandos:
	gcc -c studio1.c -o studio1.o
	gcc -c hello8.c -o hello8.o
	gcc studio1.o hello8.o -o hello8.exe
	hello8.exe
	Luego, se visualiza en la terminal: La respuesta es 42
	
	c. Si eliminamos el segundo argumento en la invocacion a prontf(), y ejecutamos nuestro programa, se visualiza como resultado el valor que tiene i en ese momento.
	Por otro lado, si agregamos un tercer argumento en la invocación de prontf() y ejecutamos nuestro programa, se visualiza como resultado la respuesta original, es decir: "La respuesta es 42". Como conclusión se puede decir que no influye el hecho de agregar mas cantidad de parámetros en la invocación a prontf().
	
	
	d. 	
		i) Se escribió el contrato studio.h
		
		ii) Se escribió el archivo hello9.c
		
		iii) Se escribió el archivo studio2.c
		
		iv) La ventaja que nos da el contrato es que si se modifica la cantidad o tipo de argumento en la invocación de la función desde el cliente, veremos el error en esa linea de código. Lo mismo sucede si modificamos el contrato. 
	
		Se ejecutaron los siguientes comandos:
		gcc -c studio2.c -o studio2.o
		gcc -c hello9.c -o hello9.o
		gcc studio2.o hello9.o -o hello9.exe
		hello9.exe
	
		La respuesta que se obtuvo es: La respuesta es 42
	
	
	
Código extra: 
Las bibliotecas contienen el código objeto de muchos programas que permiten hacer cosas comunes, como leer el teclado, escribir en la pantalla, manejar números, cadenas, realizar funciones matemáticas, etc. Las bibliotecas mas comunes son la biblioteca estandar de C y la biblioteca del estandar ANSI C.

		
		
	
	
	
	

	

							
				
		
						
	