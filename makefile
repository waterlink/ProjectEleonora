DEBUG=-g -O0
all: ./binary/x.elf
./binary/x.elf: ./objects/main.o ./objects/StudentTicket.o
	g++ ./objects/main.o ./objects/StudentTicket.o -o ./binary/x.elf $(DEBUG)
./objects/main.o: ./source/main.hpp ./source/main.cpp
	g++ ./source/main.cpp -c -o ./objects/main.o $(DEBUG)
./objects/StudentTicket.o: ./source/StudentTicket.hpp ./source/StudentTicket.cpp
	g++ ./source/StudentTicket.cpp -c -o ./objects/StudentTicket.o $(DEBUG)

