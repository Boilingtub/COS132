Task2: RangeBasedPasswordCracker.o DigitBasedPasswordCracker.o Comparisons.o Printer.o Task2.o
	g++ RangeBasedPasswordCracker.o DigitBasedPasswordCracker.o Comparisons.o Printer.o Task2.o  -o Task2

RangeBasedPasswordCracker.o:  RangeBasedPasswordCracker.cpp RangeBasedPasswordCracker.h Comparisons.h Printer.h
	g++ -c RangeBasedPasswordCracker.cpp

DigitBasedPasswordCracker.o:  DigitBasedPasswordCracker.cpp DigitBasedPasswordCracker.h Comparisons.h Printer.h
	g++ -c DigitBasedPasswordCracker.cpp

Comparisons.o:  Comparisons.cpp Comparisons.h 
	g++ -c Comparisons.cpp

Printer.o: Printer.cpp Printer.h
	g++ -c Printer.cpp
	
Task2.o:  Task2.cpp RangeBasedPasswordCracker.h DigitBasedPasswordCracker.h 
	g++ -c Task2.cpp

run: Task2
	./Task2
	
clean:
	rm -f Task2 *.o *~
	