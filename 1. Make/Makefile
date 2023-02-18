CC = g++
CFLAGS = -std=c++11 -Wall -pedantic

ifeq ($(OS), Windows_NT)
	RM = del
	TARGET = gen calc
else
	RM = rm
	TARGET = gen calc
endif

all: build-gen build-calc

run: run-gen run-calc

clean:
	echo $(OS)
	$(RM) $(TARGET) *.txt *.dat

build-gen:
	$(CC) $(CFLAGS) -o gen gen.cpp

run-gen:
	./gen 10 data.txt

build-calc:
	$(CC) $(CFLAGS) -o calc calc.cpp

run-calc:
	./calc data.txt

