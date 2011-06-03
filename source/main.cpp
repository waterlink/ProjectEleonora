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

void TicketManager::printUniversity(){

	printf("University %s\n", ticket->getUniversity().c_str());

}
void TicketManager::printPart(){

	printf("Part %s\n", ticket->getPart().c_str());

}
void TicketManager::printId(){

	printf("Id %lld\n", ticket->getId());

}
void TicketManager::printIssueDateYear(){

	printf("IssueDateYear %d\n", ticket->getIssueDateYear());

}
void TicketManager::printIssueDateMonth(){

	printf("IssueDateMonth %d\n", ticket->getIssueDateMonth());

}
void TicketManager::printIssueDateDay(){

	printf("IssueDateDay %d\n", ticket->getIssueDateDay());

}
void TicketManager::printExpirationDateYear(){

	printf("ExpirationDateYear %d\n", ticket->getExpirationDateYear());

}
void TicketManager::printExpirationDateMonth(){

	printf("ExpirationDateMonth %d\n", ticket->getExpirationDateMonth());

}
void TicketManager::printExpirationDateDay(){

	printf("ExpirationDateDay %d\n", ticket->getExpirationDateDay());

}
void TicketManager::printSurName(){

	printf("SurName %s\n", ticket->getSurName().c_str());

}
void TicketManager::printName(){

	printf("Name %s\n", ticket->getName().c_str());

}
void TicketManager::printFatherName(){

	printf("FatherName %s\n", ticket->getFatherName().c_str());

}
void TicketManager::printFaculty(){

	printf("Faculty %s\n", ticket->getFaculty().c_str());

}
void TicketManager::printStructuredUnit(){

	printf("StructuredUnit %s\n", ticket->getStructuredUnit().c_str());

}
void TicketManager::printStudyType(){

	printf("StudyType %s\n", ticket->getStudyType().c_str());

}
void TicketManager::printSpecialization(){

	printf("Specialization %s\n", ticket->getSpecialization().c_str());

}
void TicketManager::printGroup(){

	printf("Group %s\n", ticket->getGroup().c_str());

}
void TicketManager::printEntranceYear(){

	printf("EntranceYear %d\n", ticket->getEntranceYear());

}
void TicketManager::printRectorCredential(){

	printf("RectorCredentials %s\n", ticket->getRectorCredentials().c_str());

}

void TicketManager::printPhoto(){

	printf("Photo %s\n", "< photo sample >");

}
void TicketManager::printBarCode(){

	printf("BarCode %s\n", "< barcode sample >");

}

void TicketManager::showticket(){

//	printf("University %s\n", ticket->getUniversity().c_str());
	printUniversity();
//	printf("Part %s\n", ticket->getPart().c_str());
	printPart();
//	printf("Id %lld\n", ticket->getId());
	printId();
//	printf("IssueDateYear %d\n", ticket->getIssueDateYear());
	printIssueDateYear();
//	printf("IssueDateMonth %d\n", ticket->getIssueDateMonth());
	printIssueDateMonth();
//	printf("IssueDateDay %d\n", ticket->getIssueDateDay());
	printIssueDateDay();
//	printf("ExpirationDateYear %d\n", ticket->getExpirationDateYear());
	printExpirationDateYear();
//	printf("ExpirationDateMonth %d\n", ticket->getExpirationDateMonth());
	printExpirationDateMonth();
//	printf("ExpirationDateDay %d\n", ticket->getExpirationDateDay());
	printExpirationDateDay();
//	printf("SurName %s\n", ticket->getSurName().c_str());
	printSurName();
//	printf("Name %s\n", ticket->getName().c_str());
	printName();
//	printf("FatherName %s\n", ticket->getFatherName().c_str());
	printFatherName();
//	printf("Faculty %s\n", ticket->getFaculty().c_str());
	printFaculty();
//	printf("StructuredUnit %s\n", ticket->getStructuredUnit().c_str());
	printStructuredUnit();
//	printf("StudyType %s\n", ticket->getStudyType().c_str());
	printStudyType();
//	printf("Specialization %s\n", ticket->getSpecialization().c_str());
	printSpecialization();
//	printf("Group %s\n", ticket->getGroup().c_str());
	printGroup();
//	printf("EntranceYear %d\n", ticket->getEntranceYear());
	printEntranceYear();
//	printf("RectorCredentials %s\n", ticket->getRectorCredentials().c_str());
	printRectorCredential();
//	printf("Photo %s\n", "< photo sample >");
	printPhoto();
//	printf("BarCode %s\n", "< barcode sample >");
	printBarCode();

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

void TicketManager::readFaculty(){

	string str;
	getline(cin, str);
	ticket->setFaculty(str);

}

void TicketManager::readStructuredUnit(){

	string str;
	getline(cin, str);
	ticket->setStructuredUnit(str);

}

void TicketManager::readStudyType(){

	string str;
	getline(cin, str);
	ticket->setStudyType(str);

}

void TicketManager::readSpecialization(){

	string str;
	getline(cin, str);
	ticket->setSpecialization(str);

}

void TicketManager::readGroup(){

	string str;
	getline(cin, str);
	ticket->setGroup(str);

}

void TicketManager::readEntranceYear(){

	int y;
	string str;
	getline(cin, str);
	sscanf(str.c_str(), "%d", &y);
	ticket->setEntranceYear(y);

}

void TicketManager::readRectorCredential(){

	string str;
	getline(cin, str);
	ticket->setRectorCredentials(str);

}

bool TicketManager::readticket(string fPart, long long fId){

	char buff[100];
	sprintf(buff, "./data/%s_%lld", fPart.c_str(), fId);
	
	string fPath = buff;
	
	if (!freopen(fPath.c_str(), "r", stdin)){
	
		printf("Ticket not found.\n");
		return false;
	
	}
	
	readUniversity();	
	readPart();
	readId();
	readIssueDateYear();
	readIssueDateMonth();
	readIssueDateDay();
	readExpirationDateYear();
	readExpirationDateMonth();
	readExpirationDateDay();
	readSurName();
	readName();
	readFatherName();
	readFaculty();
	readStructuredUnit();
	readStudyType();
	readSpecialization();
	readGroup();
	readEntranceYear();
	readRectorCredential();
	
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

