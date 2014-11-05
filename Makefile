CC = gcc

all: compile clean run

compile: *.c
	$(CC) -g3 main.c veb.c -lm -o veb

valgrind: compile clean
	valgrind --tool=memcheck --leak-check=yes -v ./veb

test: test.c veb.c
	$(CC) test.c veb.c -lm -o test
	./test

run:
	./veb

clean: *.o
	rm *.o
