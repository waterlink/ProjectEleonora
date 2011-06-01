all: ./objects/StudentTicket.o
./objects/StudentTicket.o: ./source/StudentTicket.hpp ./source/StudentTicket.cpp
	g++ ./source/StudentTicket.cpp -c -o ./objects/StudentTicket.o
	
