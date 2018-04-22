main: point.o shared_ptr.o main.o
	g++ point.o shared_ptr.o main.o -o main
	
main.o: point.hpp shared_ptr.hpp main.cpp
	g++ -c point.hpp shared_ptr.hpp main.cpp
	
point.o: point.hpp point.cpp
	g++ -c point.hpp point.cpp
	
shared_ptr.o: point.hpp shared_ptr.hpp shared_ptr.cpp
	g++ -c point.hpp shared_ptr.hpp shared_ptr.cpp
	
clean: 
	rm -rf *.o
	rm -rf *.gch
	rm -rf main
