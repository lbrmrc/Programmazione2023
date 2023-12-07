indovina: main.o gioco.o parolaSegreta.o
	gcc -g -o indovina main.o gioco.o parolaSegreta.o

main.o: main.c gioco.h
	gcc -g -c main.c

gioco.o: gioco.c gioco.h parolaSegreta.h
	gcc -g -c  gioco.c

parolaSegreta.o: parolaSegreta.c parolaSegreta.h
	gcc -g -c parolaSegreta.c