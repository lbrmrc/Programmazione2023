frazioni: frazione.o main.o aritmetica.o
	gcc -g -o frazioni frazione.o main.o aritmetica.o # linking

main.o: main.c frazione.h
	gcc -g -c main.c

frazione.o: frazione.c frazione.h aritmetica.h
	gcc -g -c frazione.c

aritmetica.o: aritmetica.c aritmetica.h
	gcc -g -c aritmetica.c