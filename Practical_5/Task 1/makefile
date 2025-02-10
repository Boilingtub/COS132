Task1: Calculator.o Maths.o Advanced_Maths.o
	g++ -std=c++98 Advanced_Maths.o Calculator.o Maths.o -o Prac5
Calculator.o: Calculator.cpp Advanced_Maths.h Maths.h
	g++ -c Calculator.cpp
Maths.o: Maths.cpp Maths.h
	g++ -c Maths.cpp
Advanced_Maths.o: Advanced_Maths.cpp Advanced_Maths.h Constants.h
	g++ -c Advanced_Maths.cpp
run: Task1
	./Prac5
clean:
	rm -f Prac5 *.o
