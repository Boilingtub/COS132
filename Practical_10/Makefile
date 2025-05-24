CC=g++
main: main.cpp Assessment.cpp StudentDetails.cpp 
	$(CC) -std=c++98 -Wall -Werror -g *.cpp -o main 

test: main 
	$(CC) --coverage *.cpp -o main 
	./main 
	gcov -f -m -r -j ${files}
run: main
	./main 

mem: main 
	valgrind --leak-check=full --keep-stacktraces=alloc-and-free ./main

gdb: main 
	gdb ./main -ex run

