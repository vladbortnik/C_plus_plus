main: point.o main.o
	g++ point.o main.o -o main
	
main.o: point.hpp shared_ptr.hpp main.cpp
	g++ -c point.hpp shared_ptr.hpp main.cpp
	
point.o: point.hpp point.cpp
	g++ -c point.hpp point.cpp
	
clean: 
	rm -rf *.o
	rm -rf *.gch
	rm -rf main
	rm -rf main2