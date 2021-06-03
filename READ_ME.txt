_____________
Autores: 
        *Armando Genis Alvarez A01654262
        *Jesús Daniel Rivas Nuño A01655181
Archivos: 
        *Dice.h  Dice.cpp
        *Player.h Player.cpp 
        *Mygame.h Mygame.cpp 
        *main.cpp
	*Tile.cpp Tile.h
        *Snakes.cpp Snake.h 
        *Lader.cpp Lader.h
	*Normal.cpp Normal.h

-------------


-----------Instrucciones--------
1. Descagar códigos en tu plataforma preferida (de preferencia visual Studio Code o repl.it).
2. Corre el juego.
   2.1 En Visual 
       2.1.1 g++ Board.cpp main.cpp Mygame.cpp Tile.cpp Snake.cpp Normal.cpp Lader.cpp Dice.cpp Player.cpp  -o bu
       2.1.2 Para obtener el output, escribe:  ./bu
   2.2 En repli.it
       2.1.1 Presiona el botón de star que el programa tiene. 
3. Escoge si el board va a ser el de por defecto o vas a cambiar las configuraciones 
   3.1 por defecto
       3.1 El juego correrá con los parámetros establecidos. 30 miles, 3 casillas snakes y laders, -3 si cae en un snake y +3 si cae en un lader y 2 jugadores. 
   3.2 Cambiando las configuraciones
       3.2.1 Tu podrás cambiar la cantidad de Tiles, casillas de snakes y laders, podrás modificar los reward y penalty y la cantidad de jugadores.   
4. Escoge el modo de juego
   4.1 Manual
       4.1.1 Corra el juego y escriba 1
       4.1.2 Presione 'C' en mayusculas para iniciar el juego 
       4.1.3 Siga presionando 'C' si quiere que continue el juego
       4.1.4 Presione 'E' en mayusculas cuando quiera terminar el juego.
       4.1.5 Revise el archivo txt para revisar quien gano o en la terminal. 
   4.2 Automático 
       4.2.1 Corra el juego y escriba 2.  
       4.2.2 El juego correrá de forma automática hasta que un jugador gane o hasta alcanzar el límite de los turnos. 
       4.2.3 Verifique el ganador en la terminal o en el archivo txt. 
   4.3 Con el archivo txt
       4.2.1 abra el archivo dentro de la carpeta llamado "inCyE.txt". 
       4.2.2 Introduzca el numero de tiradas que quiera, escribiendo 'C'(mayúscula) y presione enter después de meter UN carácter. 
       4.2.3 Introduzca 'E' en el archivo txt para terminar el juego. 
       4.2.4 Corra el juego y escriba el numero 3. 
       4.2.5 Verifique el ganador en la terminal o en el archivo txt. 

---------Discusión--------------
Durante este archivo hay una composición entre el jugador y el juego. Esto se debe a que el juego tiene jugadores. Por otro lado, hay agregaciones entre el dado y el jugador, ya que el jugador usa al dado. Otros conceptos que se usaron son las los getters y setters (mutators & accesor) para poder obtener y actualizar datos o valores importantes, tales como las posiciones de los jugadores o turnos, y tener un más limpio nuestro código. Utilizando el concepto de abstracción se generaron 3 clase: Mygame.h Player.h & Dice.h . Que nos ayudaron a mantener el código lo mas simple posible. Para poder leer el archivo, utilizamos la librería "fstream" la cual nos ayuda a abrir y crear archivos. Creamos un archivo donde se encuentra la salida del programa donde se escribe todos los movimientos y condiciones del juego. También, leemos un archivo txt el cual contiene C's y una E las cuales ayudan a definir las tiradas del juego. Convertimos aquel archivo en una matriz de 1 columna con filas cualquiera (Matriz[0][#]) donde # es la posición de E. Para leer la matriz y el archivo no importa el largo de la matriz porque en teoría nuestro programa deja de iterar cuando lee una E en el programa por lo cual los caracteres desconocidos después de esta E, del archivo, no los utilizara. Pero si hay caracteres diferentes a C antes del E, este mostrara un mensaje de error. Por ultimo, se generaron 2 modos de juego. El primero, siendo un modo manual que hace uso de la terminal para jugar. Por otro lado, el segundo es un modo automático, el cual recibe un archivo .txt con las tiradas que se quieren hacer y arroja los resultados de estas en otro .txt. Cabe aclarar que este modo de txt file, tiene la utilidad de ser un modo de prueba rápido a la hora de probar distintas situaciones en el juego. Por otro lado hicimos polimorfos en las clases de Normal.h, Snake.h y lader.h que heredan de manera publica de la clase abstracta llamada Tile. Tile hereda tres funciones virtual, la primera es move porque todos hacen movimientos pero de diferente manera, es decir Snake hace movimientos hacia atrás y Lader y normal lo hacia hacia enfrente. La segunda es la función setMove. Esta actualiza cuantas casillas avanzara o se restara de dependiendo de la clase o tipo de casilla. La tercera es gettype la cual obtiene los tipos el tipo de casilla donde esta el jugador. Esto nos permitió crear un arreglo de Tiles o casillas para maximizar el código y optimizarlo. 