main:
	gcc main.c -o main.out

test:
	gcc -coverage main.c -o main.out
	./main.out
	gcov main.c

clean:
	rm -rf *.o *.out
	rm -rf *.gcov *gcda *gcno

all: main
