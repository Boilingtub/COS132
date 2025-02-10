all: Task2
	./Task2
	rm *.o Task2

run: Task2
	./Task2

Task2: Task2.o NumberUtils.o StringUtils.o Decipher.o
	g++ -std=c++98 Task2.o NumberUtils.o StringUtils.o Decipher.o -o Task2

Task2.o: Task2.cpp Decipher.h StringUtils.h
	g++ -std=c++98 -c Task2.cpp

NumberUtils.o: NumberUtils.cpp NumberUtils.h
	g++ -std=c++98 -c NumberUtils.cpp

StringUtils.o: StringUtils.cpp StringUtils.h
	g++ -std=c++98 -c StringUtils.cpp

Decipher.o: Decipher.cpp NumberUtils.h StringUtils.h Decipher.h
	g++ -std=c++98 -c Decipher.cpp

