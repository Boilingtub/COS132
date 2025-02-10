Main: DatabaseCorruption.o DatabaseSearch.o NetworkInfiltration.o Main.o
	g++ DatabaseCorruption.o DatabaseSearch.o NetworkInfiltration.o Main.o -o Main

DatabaseCorruption.o: DatabaseCorruption.cpp DatabaseCorruption.h
	g++ -c DatabaseCorruption.cpp -std=c++98

DatabaseSearch.o: DatabaseSearch.cpp DatabaseSearch.h
	g++ -c DatabaseSearch.cpp -std=c++98

NetworkInfiltration.o: NetworkInfiltration.cpp NetworkInfiltration.h
	g++ -c NetworkInfiltration.cpp -std=c++98

Main.o: Main.cpp DatabaseCorruption.h DatabaseSearch.h NetworkInfiltration.h
	g++ -c Main.cpp -std=c++98

run: Main
	./Main

clean:
	rm -f *.o Main
