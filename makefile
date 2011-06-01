all: ./objects/main.o

./objects/main.o: ./source/main.hpp ./source/main.cpp
	g++ ./source/main.hpp -c -o ./objects/main.o
	
