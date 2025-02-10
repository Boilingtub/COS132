all: Task1
	./Task1
	rm *.o Task1

run: Task1
	./Task1

Task1: Task1.o loop.o
	g++ -std=c++98 Task1.o loop.o -o Task1

Task1.o: Task1.cpp loop.h
	g++ -std=c++98  -c Task1.cpp

loop.o: loop.cpp loop.h
	g++ -std=c++98 -c loop.cpp

