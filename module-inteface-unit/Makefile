CC=/usr/bin/clang++-8

all: test

math.pcm: math.cppm
	$(CC) -fmodules-ts --precompile math.cppm -o math.pcm

math.pcm.o: math.pcm
	$(CC) -fmodules-ts -c math.pcm -o math.pcm.o

math.o: math.cpp
	$(CC) -fmodules-ts -fmodule-file=math.pcm -c math.cpp -o math.o

main.o: main.cpp math.pcm
	$(CC) -fmodules-ts -fmodule-file=math.pcm -c main.cpp -o main.o

test: main.o math.o math.pcm.o
	$(CC) main.o math.pcm.o math.o -o test

clean:
	-rm math.pcm math.o main.o test
