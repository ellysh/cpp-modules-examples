CC=/usr/bin/clang++-8

all: test

# Precompile the module interface unit
math.pcm: math.cppm
	$(CC) -DMACRO_INTERFACE=1 -fmodules-ts --precompile math.cppm -o math.pcm

# Compile an object file of the module interface unit
math.pcm.o: math.pcm
	$(CC) -fmodules-ts -c math.pcm -o math.pcm.o

# Compile an object file of the module implementation unit
math.o: math.cpp
	$(CC) -DMACRO_IMPLEMENTATION=1 -fmodules-ts -fmodule-file=math.pcm -c math.cpp -o math.o

# Compile the main object file
main.o: main.cpp math.pcm
	$(CC) -fmodules-ts -fmodule-file=math.pcm -c main.cpp -o main.o

# Link the executable file
test: main.o math.o math.pcm.o
	$(CC) main.o math.pcm.o math.o -o test

clean:
	-rm math.pcm math.o main.o test
