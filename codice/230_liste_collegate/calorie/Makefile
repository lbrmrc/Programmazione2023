calorie: main.o listaAlimento.o
	gcc -g -o calorie main.o listaAlimento.o 

main.o: main.c listaAlimento.h
	gcc -g -c main.c

listaAlimento.o: listaAlimento.c listaAlimento.h
	gcc -g -c listaAlimento.c