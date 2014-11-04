CC = gcc

all: compile clean run

compile: *.c
	$(CC) -g3 -lm main.c veb.c -o veb

valgrind: compile clean
	valgrind --tool=memcheck --leak-check=yes -v ./veb

test: test.c veb.c
	$(CC) -lm test.c veb.c -o test
	./test

run:
	./veb

clean: *.o
	rm *.o
