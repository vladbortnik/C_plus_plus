main: main.o board.o boardview.o
	g++ main.o board.o boardview.o -o main
	
main.o: main.cpp board.hpp boardview.hpp
	g++ -c main.cpp board.hpp boardview.hpp
	
board.o: board.hpp board.cpp
	g++ -c board.hpp board.cpp
	
boardview.o: boardview.hpp boardview.cpp
	g++ -c boardview.hpp boardview.cpp
	
clean:
	rm -rf *.o
	rm -rf *.gch
	rm -rf a.out
	rm -rf *.h
	rm main
	rm main2