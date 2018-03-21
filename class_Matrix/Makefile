main: main.o matrix.o
	g++ main.o matrix.o -o main

main.o: main.cpp matrix.h
	g++ -c main.cpp matrix.h
	
matrix.o: matrix.h matrix.cpp
	g++ -c matrix.h matrix.cpp
	
clean:
	rm -rf *.o
	rm -rf *.gch