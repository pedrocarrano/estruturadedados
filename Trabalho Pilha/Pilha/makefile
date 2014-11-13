all: pilha

pilha: pilha.o
	gcc pilha.o -o pilha 

pilha.o: pilha.h pilha.c
	gcc -c pilha.c
clean: 
	rm *.o
