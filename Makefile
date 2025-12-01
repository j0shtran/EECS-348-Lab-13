CC = g++
CFLAGS = -Wall 

all: algo1

algo1: algo1.cpp
	$(CC) $(CFLAGS) algo1.cpp -o algo1

clean: 
	rm rf *.o -f algo1
