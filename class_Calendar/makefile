main: calendar.o main.o
	g++ calendar.o main.o -o main
	
calendar.o: calendar.h calendar.cpp
	g++ -c calendar.h calendar.cpp
	
main.o: calendar.h main.cpp
	g++ -c calendar.h main.cpp
	
clean:
	rm -rf *.o
	rm -rf *gch
	rm main