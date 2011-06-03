FLAGS=-Wall
DEBUG=-g -O0 -fno-inline
all: ./binary/x.elf
./binary/x.elf: ./objects/main.o ./objects/StudentTicket.o ./objects/TicketManager.o ./objects/Reader.o
	g++ ./objects/main.o ./objects/StudentTicket.o ./objects/TicketManager.o ./objects/Reader.o -o ./binary/x.elf $(DEBUG) $(FLAGS)
./objects/main.o: ./source/main.hpp ./source/main.cpp
	g++ ./source/main.cpp -c -o ./objects/main.o $(DEBUG) $(FLAGS)
./objects/StudentTicket.o: ./source/StudentTicket.hpp ./source/StudentTicket.cpp
	g++ ./source/StudentTicket.cpp -c -o ./objects/StudentTicket.o $(DEBUG) $(FLAGS)
./objects/TicketManager.o: ./source/TicketManager.hpp ./source/TicketManager.cpp
	g++ ./source/TicketManager.cpp -c -o ./objects/TicketManager.o $(DEBUG) $(FLAGS)
./objects/Reader.o: ./source/Reader.hpp ./source/Reader.cpp
	g++ ./source/Reader.cpp -c -o ./objects/Reader.o $(DEBUG) $(FLAGS)
	
test: ./test/test.elf ./test/gen.elf
./test/test.elf: ./objects/Test_main.o
	g++ ./objects/Test_main.o -o ./test/test.elf $(DEBUG) $(FLAGS)
./objects/Test_main.o: ./source/Test_main.hpp ./source/Test_main.cpp
	g++ ./source/Test_main.cpp -c -o ./objects/Test_main.o $(DEBUG) $(FLAGS)
./test/gen.elf: ./objects/Test_genTickets.o ./objects/StudentTicket.o
	g++ ./objects/Test_genTickets.o ./objects/StudentTicket.o -o ./test/gen.elf $(DEBUG) $(FLAGS)
./objects/Test_genTickets.o: ./source/Test_genTickets.hpp ./source/Test_genTickets.cpp
	g++ ./source/Test_genTickets.cpp -c -o ./objects/Test_genTickets.o $(DEBUG) $(FLAGS)


