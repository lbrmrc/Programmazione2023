eseguibile: main.o funzioni-aritmetiche.o radice-quadrata.o
	gcc -o eseguibile main.o funzioni-aritmetiche.o radice-quadrata.o -lm

# entry
main.o: main.c funzioni-aritmetiche.h radice-quadrata.h
	gcc -c main.c

funzioni-aritmetiche.o: funzioni-aritmetiche.c 
	gcc -c funzioni-aritmetiche.c

radice-quadrata.o: radice-quadrata.c funzioni-aritmetiche.h
	gcc -c radice-quadrata.c