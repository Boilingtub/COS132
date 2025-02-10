Task3: PasswordCracker.o Int.o Char.o SpecialChar.o Task3.o 
	g++ PasswordCracker.o Int.o Char.o SpecialChar.o Task3.o -o Task3

Int.o: Int.cpp Int.h
	g++ -c Int.cpp

Char.o: Char.cpp Char.h
	g++ -c Char.cpp

SpecialChar.o: SpecialChar.cpp SpecialChar.h
	g++ -c SpecialChar.cpp	

PasswordCracker.o: PasswordCracker.cpp PasswordCracker.h
	g++ -c PasswordCracker.cpp

Task3.o: Task3.cpp PasswordCracker.h Int.h Char.h SpecialChar.h
	g++ -c Task3.cpp

run: Task3
	./Task3

clean:
	rm -f Task3 *.o