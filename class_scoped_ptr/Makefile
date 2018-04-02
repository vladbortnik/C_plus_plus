main: main.o Array.o scoped_ptr.o
	g++ main.o Array.o scoped_ptr.o -o main

main.o: main.cpp Array.hpp scoped_ptr.hpp
	g++ -c main.cpp Array.hpp scoped_ptr.hpp
	
Array.o: Array.cpp Array.hpp
	g++ -c Array.cpp Array.hpp
	
scoped_ptr.o: Array.hpp scoped_ptr.hpp scoped_ptr.cpp
	g++ -c Array.hpp scoped_ptr.hpp scoped_ptr.cpp
	
clean:
	rm -rf *.o
	rm -rf *.gch
#	rm a.out