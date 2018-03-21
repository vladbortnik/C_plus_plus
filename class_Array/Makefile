main: main.o Array.o
	g++ main.o Array.o -o main

main.o: main.cpp Array.hpp
	g++ -c main.cpp Array.hpp
	
Array.o: Array.cpp Array.hpp
	g++ -c Array.cpp Array.hpp
	
clean:
	rm -rf *.o
	rm -rf *.gch
	rm a.out