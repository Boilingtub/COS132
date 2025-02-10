# Main executable
main: main.o testIf.o testSwitch.o testFor.o
	g++ main.o testIf.o testSwitch.o testFor.o -o main

# Compile main.cpp
main.o: main.cpp testIf.h testSwitch.h testFor.h
	g++ -c main.cpp -std=c++98

# Compile testIf module
testIf.o: testIf.cpp testIf.h
	g++ -c testIf.cpp -std=c++98

# Compile testSwitch module
testSwitch.o: testSwitch.cpp testSwitch.h
	g++ -c testSwitch.cpp -std=c++98

# Compile testFor module
testFor.o: testFor.cpp testFor.h
	g++ -c testFor.cpp -std=c++98

# Run the program
run: main
	./main

# Clean up object files and executable
clean:
	rm -f *.o main
