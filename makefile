DEBUG=-g -O0
all: ./binary/x.elf
./binary/x.elf: ./objects/main.o ./objects/StudentTicket.o
	g++ ./objects/main.o ./objects/StudentTicket.o -o ./binary/x.elf $(DEBUG)
./objects/main.o: ./source/main.hpp ./source/main.cpp
	g++ ./source/main.cpp -c -o ./objects/main.o $(DEBUG)
./objects/StudentTicket.o: ./source/StudentTicket.hpp ./source/StudentTicket.cpp
	g++ ./source/StudentTicket.cpp -c -o ./objects/StudentTicket.o $(DEBUG)
	
test: ./test/test.elf
./test/test.elf: ./objects/Test_main.o
	g++ ./objects/Test_main.o -o ./test/test.elf $(DEBUG)
./objects/Test_main.o: ./source/Test_main.hpp ./source/Test_main.cpp
	g++ ./source/Test_main.cpp -c -o ./objects/Test_main.o $(DEBUG)


