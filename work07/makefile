all: randfilefunc.o
	gcc -o randfunc randfilefunc.o

randfilefunc.o: randfilefunc.c randfilefunc.h
	gcc -c -g randfilefunc.c

run: all
	./randfunc

clean:
	rm *~
	rm *.o
