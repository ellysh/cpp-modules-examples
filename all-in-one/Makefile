CC=/usr/bin/clang++-8

all: test

math.pcm: math.cppm
	$(CC) -fmodules-ts --precompile -x c++-module math.cppm -o math.pcm

math.o: math.pcm
	$(CC) -fmodules-ts -c math.pcm -o math.o

main.o: main.cpp math.pcm
	$(CC) -fmodules-ts -fmodule-file=math.pcm -c main.cpp -o main.o

test: main.o math.o
	$(CC) main.o math.o -o test

clean:
	-rm math.pcm math.o main.o test
