all: fila

fila: fila.o metodos_alternativos.o main.o
	gcc fila.o main.o metodos_alternativos.o -o fila 

main.o: fila.h  fila.c main.c metodos_alternativos.c 
	gcc -c fila.c main.c metodos_alternativos.c	

metodos_alternativos.o: metodos_alternativos.c fila.h 
	gcc -c metodos_alternativos.c 

fila.o: fila.h fila.c
	gcc -c fila.c
clean: 
	rm *~ *.o
