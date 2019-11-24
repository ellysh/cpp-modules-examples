CC=/usr/bin/clang++-8

all: test

# Precompile the module with the environment macro
math.pcm: math.cppm
	$(CC) -DENVIRONMENT_MACRO=1 -fmodules-ts --precompile math.cppm -o math.pcm

# Compile the module object file
math.o: math.pcm
	$(CC) -fmodules-ts -c math.pcm -o math.o

# Compile the main object file
main.o: main.cpp math.pcm
	$(CC) -fmodules-ts -fmodule-file=math.pcm -c main.cpp -o main.o

# Link the executable file
test: main.o math.o
	$(CC) main.o math.o -o test

clean:
	-rm math.pcm math.o main.o test
