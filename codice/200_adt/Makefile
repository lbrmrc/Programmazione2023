esempio_contatore: main.o contatore.o
	gcc -g -o esempio_contatore main.o contatore.o

main.o: main.c contatore.h
	gcc -g -c main.c

contatore.o: contatore.c contatore.h
	gcc -g -c contatore.c
