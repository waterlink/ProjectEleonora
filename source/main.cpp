/*Copyright (c) 2011 Fedorov Alexey.

Author: Fedorov Alexey.
Type: Open-Source Project.
Platform: Linux.
Codename: Project Eleonora.

Student tickets accounting system.

This software is provided 'as-is', without any express or implied
warranty. In no event will the authors be held liable for any damages
arising from the use of this software.
*/

/*source main
*/

#include "main.hpp"

#include <string>
#include <cstdio>

using namespace std;

int main(int argc, char ** argv){

	long long x;

	if (argc < 2){
	
		printf("usage: x Part Id\n");
		return 0;
	
	}
	
	string Part = argv[1];
	
	string IdString = argv[2];
	sscanf(IdString.c_str(), "%lld", &x);
	
	long long Id = x;

	return 0;

}

