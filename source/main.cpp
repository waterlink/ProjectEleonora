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

TicketManager::TicketManager(){

	ticket = new StudentTicket;

}
TicketManager::~TicketManager(){

	delete ticket;

}

void TicketManager::showticket(){

	printf("University %s\n", ticket->getUniversity().c_str());
	printf("Part %s\n", ticket->getPart().c_str());
	printf("Id %lld\n", ticket->getId());
	printf("IssueDateYear %d\n", ticket->getIssueDateYear());
	printf("IssueDateMonth %d\n", ticket->getIssueDateMonth());
	printf("IssueDateDay %d\n", ticket->getIssueDateDay());
	printf("ExpirationDateYear %d\n", ticket->getExpirationDateYear());
	printf("ExpirationDateMonth %d\n", ticket->getExpirationDateMonth());
	printf("ExpirationDateDay %d\n", ticket->getExpirationDateDay());
	printf("SurName %s\n", ticket->getSurName().c_str());
	printf("Name %s\n", ticket->getName().c_str());
	printf("FatherName %s\n", ticket->getFatherName().c_str());
	printf("Faculty %s\n", ticket->getFaculty().c_str());
	printf("StructuredUnit %s\n", ticket->getStructuredUnit().c_str());
	printf("StudyType %s\n", ticket->getStudyType().c_str());
	printf("Specialization %s\n", ticket->getSpecialization().c_str());
	printf("Group %s\n", ticket->getGroup().c_str());
	printf("EntranceYear %d\n", ticket->getEntranceYear());
	printf("RectorCredentials %s\n", ticket->getRectorCredentials().c_str());
	printf("Photo %s\n", "< photo sample >");
	printf("BarCode %s\n", "< barcode sample >");

}

void TicketManager::readUniversity(){

	string str;
	getline(cin, str);
	ticket->setUniversity(str);

}

void TicketManager::readPart(){

	string str;
	getline(cin, str);
	ticket->setPart(str);

}

void TicketManager::readId(){

	long long x;
	string str;
	getline(cin, str);
	sscanf(str.c_str(), "%lld", &x);
	ticket->setId(x);

}

void TicketManager::readIssueDateYear(){

	int y;
	string str;
	getline(cin, str);
	sscanf(str.c_str(), "%d", &y);
	ticket->setIssueDateYear(y);

}

void TicketManager::readIssueDateMonth(){

	int y;
	string str;
	getline(cin, str);
	sscanf(str.c_str(), "%d", &y);
	ticket->setIssueDateMonth(y);

}

void TicketManager::readIssueDateDay(){

	int y;
	string str;
	getline(cin, str);
	sscanf(str.c_str(), "%d", &y);
	ticket->setIssueDateDay(y);

}

void TicketManager::readExpirationDateYear(){

	int y;
	string str;
	getline(cin, str);
	sscanf(str.c_str(), "%d", &y);
	ticket->setExpirationDateYear(y);

}

void TicketManager::readExpirationDateMonth(){

	int y;
	string str;
	getline(cin, str);
	sscanf(str.c_str(), "%d", &y);
	ticket->setExpirationDateMonth(y);

}

void TicketManager::readExpirationDateDay(){

	int y;
	string str;
	getline(cin, str);
	sscanf(str.c_str(), "%d", &y);
	ticket->setExpirationDateDay(y);

}

void TicketManager::readSurName(){

	string str;
	getline(cin, str);
	ticket->setSurName(str);

}

void TicketManager::readName(){

	string str;
	getline(cin, str);
	ticket->setName(str);

}

void TicketManager::readFatherName(){

	string str;
	getline(cin, str);
	ticket->setFatherName(str);

}

bool TicketManager::readticket(string fPart, long long fId){

	string str;
	int y;
	
	char buff[100];
	sprintf(buff, "./data/%s_%lld", fPart.c_str(), fId);
	
	string fPath = buff;
	
	if (!freopen(fPath.c_str(), "r", stdin)){
	
		printf("Ticket not found.\n");
		return false;
	
	}
	
//	getline(cin, str);
//	ticket->setUniversity(str);
	readUniversity();
	
//	getline(cin, str);
//	ticket->setPart(str);
	readPart();
	
//	getline(cin, str);
//	sscanf(str.c_str(), "%lld", &x);
//	ticket->setId(x);
	readId();
	
//	getline(cin, str);
//	sscanf(str.c_str(), "%d", &y);
//	ticket->setIssueDateYear(y);
	readIssueDateYear();
	
//	getline(cin, str);
//	sscanf(str.c_str(), "%d", &y);
//	ticket->setIssueDateMonth(y);
	readIssueDateMonth();
	
//	getline(cin, str);
//	sscanf(str.c_str(), "%d", &y);
//	ticket->setIssueDateDay(y);
	readIssueDateDay();
	
//	getline(cin, str);
//	sscanf(str.c_str(), "%d", &y);
//	ticket->setExpirationDateYear(y);
	readExpirationDateYear();
	
//	getline(cin, str);
//	sscanf(str.c_str(), "%d", &y);
//	ticket->setExpirationDateMonth(y);
	readExpirationDateMonth();
	
//	getline(cin, str);
//	sscanf(str.c_str(), "%d", &y);
//	ticket->setExpirationDateDay(y);
	readExpirationDateDay();
	
//	getline(cin, str);
//	ticket->setSurName(str);
	readSurName();
	
//	getline(cin, str);
//	ticket->setName(str);
	readName();
	
//	getline(cin, str);
//	ticket->setFatherName(str);
	readFatherName();
	
	getline(cin, str);
	ticket->setFaculty(str);
	
	getline(cin, str);
	ticket->setStructuredUnit(str);
	
	getline(cin, str);
	ticket->setStudyType(str);
	
	getline(cin, str);
	ticket->setSpecialization(str);
	
	getline(cin, str);
	ticket->setGroup(str);
	
	getline(cin, str);
	sscanf(str.c_str(), "%d", &y);
	ticket->setEntranceYear(y);
	
	getline(cin, str);
	ticket->setRectorCredentials(str);
	
	return true;

}

bool TicketManager::getTicket(string Part, long long Id){

	if (!readticket(Part, Id))
		return false;
	
	showticket();
	
	return true;

}

int main(int argc, char ** argv){

	string str;
	long long x;

	if (argc < 2){
	
		printf("usage: x Part Id\n");
		return 0;
		
	}
	
	string Part = argv[1];
	
	string IdString = argv[2];
	sscanf(IdString.c_str(), "%lld", &x);
	
	long long Id = x;
	
	TicketManager * tm = new TicketManager;
	
	tm->getTicket(Part, Id);
	
	delete tm;

	return 0;

}

