

pilha.c: pilha.o main.o
	gcc -o main pilha.o main.o
main.o: pilha.h
	gcc -c main.c
pilha.o: pilha.h pilha.c
	gcc -c pilha.c
