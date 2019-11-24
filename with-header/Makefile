CC=/usr/bin/clang++-8

all: test

math.pcm: math.ixx
	$(CC) -fmodules-ts --precompile -x c++-module math.ixx -o math.pcm

math.m.o: math.pcm
	$(CC) -fmodules-ts -c math.pcm math.cppm -o math.m.o

main.o: main.cpp
	$(CC) -fmodules-ts -fmodule-file=math.pcm -c main.cpp -o main.o

test: math.m.o main.o
	$(CC) math.m.o main.o -o exe

clean:
	-rm test
