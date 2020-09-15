main:
	gcc main.c -o main.out

clean:
	rm -rf *.o *.out

all: main
