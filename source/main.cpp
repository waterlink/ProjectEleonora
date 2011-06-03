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

	printUniversity();
	printPart();
	printId();
	printIssueDateYear();
	printIssueDateMonth();
	printIssueDateDay();
	printExpirationDateYear();
	printExpirationDateMonth();
	printExpirationDateDay();
	printSurName();
	printName();
	printFatherName();
	printFaculty();
	printStructuredUnit();
	printStudyType();
	printSpecialization();
	printGroup();
	printEntranceYear();
	printRectorCredential();
	printPhoto();
	printBarCode();

}

string Reader::readStringLine(){

	string str;
	getline(cin, str);
	return str;

}
int Reader::readIntLine(){

	int y;
	sscanf(Reader::readStringLine().c_str(), "%d", &y);
	return y;

}
long long Reader::readLongLongLine(){

	long long x;
	sscanf(Reader::readStringLine().c_str(), "%lld", &x);
	return x;

}

void TicketManager::readUniversity(){

//	string str;
//	getline(cin, str);
	ticket->setUniversity(Reader::readStringLine());

}

void TicketManager::readPart(){

//	string str;
//	getline(cin, str);
	ticket->setPart(Reader::readStringLine());

}

void TicketManager::readId(){

//	long long x;
//	string str;
//	getline(cin, str);
//	sscanf(str.c_str(), "%lld", &x);
	ticket->setId(Reader::readLongLongLine());

}

void TicketManager::readIssueDateYear(){

//	int y;
//	string str;
//	getline(cin, str);
//	sscanf(str.c_str(), "%d", &y);
	ticket->setIssueDateYear(Reader::readIntLine());

}

void TicketManager::readIssueDateMonth(){

//	int y;
//	string str;
//	getline(cin, str);
//	sscanf(str.c_str(), "%d", &y);
	ticket->setIssueDateMonth(Reader::readIntLine());

}

void TicketManager::readIssueDateDay(){

//	int y;
//	string str;
//	getline(cin, str);
//	sscanf(str.c_str(), "%d", &y);
	ticket->setIssueDateDay(Reader::readIntLine());

}

void TicketManager::readExpirationDateYear(){

//	int y;
//	string str;
//	getline(cin, str);
//	sscanf(str.c_str(), "%d", &y);
	ticket->setExpirationDateYear(Reader::readIntLine());

}

void TicketManager::readExpirationDateMonth(){

//	int y;
//	string str;
//	getline(cin, str);
//	sscanf(str.c_str(), "%d", &y);
	ticket->setExpirationDateMonth(Reader::readIntLine());

}

void TicketManager::readExpirationDateDay(){

//	int y;
//	string str;
//	getline(cin, str);
//	sscanf(str.c_str(), "%d", &y);
	ticket->setExpirationDateDay(Reader::readIntLine());

}

void TicketManager::readSurName(){

//	string str;
//	getline(cin, str);
	ticket->setSurName(Reader::readStringLine());

}

void TicketManager::readName(){

//	string str;
//	getline(cin, str);
	ticket->setName(Reader::readStringLine());

}

void TicketManager::readFatherName(){

//	string str;
//	getline(cin, str);
	ticket->setFatherName(Reader::readStringLine());

}

void TicketManager::readFaculty(){

//	string str;
//	getline(cin, str);
	ticket->setFaculty(Reader::readStringLine());

}

void TicketManager::readStructuredUnit(){

//	string str;
//	getline(cin, str);
	ticket->setStructuredUnit(Reader::readStringLine());

}

void TicketManager::readStudyType(){

//	string str;
//	getline(cin, str);
	ticket->setStudyType(Reader::readStringLine());

}

void TicketManager::readSpecialization(){

//	string str;
//	getline(cin, str);
	ticket->setSpecialization(Reader::readStringLine());

}

void TicketManager::readGroup(){

//	string str;
//	getline(cin, str);
	ticket->setGroup(Reader::readStringLine());

}

void TicketManager::readEntranceYear(){

//	int y;
//	string str;
//	getline(cin, str);
//	sscanf(str.c_str(), "%d", &y);
	ticket->setEntranceYear(Reader::readIntLine());

}

void TicketManager::readRectorCredential(){

//	string str;
//	getline(cin, str);
	ticket->setRectorCredentials(Reader::readStringLine());

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

