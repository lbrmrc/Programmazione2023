esami: main.o listaEsami.o
	gcc -g -o esami main.o listaEsami.o

listaEsami.o: listaEsami.c listaEsami.h	
	gcc -g -c listaEsami.c

main.o: main.c listaEsami.h
	gcc -g -c main.c