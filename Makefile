all: bin/estatico bin/dinamico

bin/estatico: obj/main.o lib/libconv.a
	gcc -I include/ -static obj/main.o -lconv -L lib/ -o bin/estatico

bin/dinamico: obj/main.o lib/libconv.so
	gcc obj/main.o lib/libconv.so -lconv -L lib/ -o bin/dinamico
	
	
lib/libconv.so: src/main.c src/segundos.c src/dias.c src/fecha.c
	gcc -fPIC -Wall -shared -I include/ src/main.c src/segundos.c src/dias.c src/fecha.c -o lib/libconv.so
	
lib/libconv.a: obj/main.o obj/segundos.o obj/dias.o obj/fecha.o
	ar rcs lib/libconv.a obj/main.o obj/segundos.o obj/dias.o obj/fecha.o

obj/main.o: src/main.c
	gcc -Wall -I include/ -c src/main.c -o obj/main.o

obj/fecha.o: src/fecha.c
	gcc -Wall -I include/ -c src/fecha.c -o obj/fecha.o

obj/segundos.o: src/segundos.c
	gcc -Wall -I include/ -c src/segundos.c -o obj/segundos.o

obj/dias.o: src/dias.c
	gcc -Wall -I include/ -c src/dias.c -o obj/dias.o

.PHONY: clean
clean:
	rm obj/*.o bin/estatico bin/dinamico lib/libconv.a lib/libconv.so