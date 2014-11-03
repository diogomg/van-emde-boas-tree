CC = gcc

all: compile clean run

compile: *.c
	$(CC) -g3 -lm *.c -o veb

valgrind: compile clean
	valgrind --tool=memcheck --leak-check=yes -v ./veb

run:
	./veb

clean: *.o
	rm *.o
