Task2: MessageDecoder.o PoisonDilute.o TreasureMap.o Story.o Task2.o
	g++ MessageDecoder.o PoisonDilute.o TreasureMap.o Story.o Task2.o -o Task2

MessageDecoder.o: MessageDecoder.cpp MessageDecoder.h
	g++ -c MessageDecoder.cpp

PoisonDilute.o: PoisonDilute.cpp PoisonDilute.h
	g++ -c PoisonDilute.cpp

TreasureMap.o: TreasureMap.cpp TreasureMap.h
	g++ -c TreasureMap.cpp

Story.o: Story.cpp Story.h
	g++ -c Story.cpp

run: Task2
	./Task2

clean:
	rm -f *.o Task2