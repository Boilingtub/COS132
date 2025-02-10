Task1: Calculate.o Message.o Total.o Task1.o
	g++ Calculate.o Message.o Total.o Task1.o -o Task1

Calculate.o: Calculate.cpp Calculate.h
	g++ -c Calculate.cpp

Message.o: Message.cpp Message.h
	g++ -c Message.cpp

Total.o: Total.cpp Total.h
	g++ -c Total.cpp

Task1.o: Task1.cpp Calculate.h Message.h Total.h
	g++ -c Task1.cpp	

run: Task1
	./Task1

clean:
	rm -f Task1 *.o