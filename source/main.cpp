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
#include "TicketManager.hpp"
#include "StudentTicket.hpp"

string getPartFromCommandLine(int argc, char ** argv){

	if (argc < 1) return "";
	return argv[1];

}

long long getIdFromCommandLine(int argc, char ** argv){

	if (argc < 2) return 0;
	long long x = 0;
	sscanf(argv[2], "%lld", &x);
	return x;

}

int main(int argc, char ** argv){

	string Part = getPartFromCommandLine(argc, argv);
	long long Id = getIdFromCommandLine(argc, argv);
	
	if (Part == "" || Id == 0){
	
		printf("usage: x Part Id\n");
		return 0;
		
	}
	
	TicketManager * tm = new TicketManager;
	
	tm->fPartSetup(Part);
	tm->fIdSetup(Id);
	tm->getTicket();
	
	delete tm;

	return 0;

}

