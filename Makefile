CC = gcc

all: compile clean run

compile: *.c
	$(CC) -fprofile-arcs -ftest-coverage -g main.c veb.c -lm -o veb

valgrind: compile clean
	valgrind --tool=memcheck --leak-check=yes -v ./veb

test: test.c veb.c
	$(CC) -fprofile-arcs -ftest-coverage -g test.c veb.c -lm -o test
	./test

coverage: veb.gcda
	gcov veb.gcda

run:
	./veb

clean: *.o
	rm *.o *.gc*
