
utilfecha: main.o segundos.o dias.o fecha.o
		gcc -o utilfecha main.o segundos.o dias.o fecha.o

main.o: main.c utilfecha.h
		gcc -c main.c

suma.o: segundos.c utilfecha.h
		gcc -c segundos.c

dias.o: dias.c utilfecha.h
		gcc -c dias.c

fecha.o: fecha.c utilfecha.h
		gcc -c fecha.c

clean:
		rm -f utilfecha *.o