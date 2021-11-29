CC=g++

all: clean hello

hello: main.o
	$(CC) main.o -o hello

main.o: main.cpp
	$(CC) -c main.cpp

clean:
	rm -rf *.o hello