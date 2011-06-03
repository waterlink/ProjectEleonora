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

	printf("University %s\n", getTicketField()->getUniversity().c_str());

}
void TicketManager::printPart(){

	printf("Part %s\n", getTicketField()->getPart().c_str());

}
void TicketManager::printId(){

	printf("Id %lld\n", getTicketField()->getId());

}
void TicketManager::printIssueDateYear(){

	printf("IssueDateYear %d\n", getTicketField()->getIssueDateYear());

}
void TicketManager::printIssueDateMonth(){

	printf("IssueDateMonth %d\n", getTicketField()->getIssueDateMonth());

}
void TicketManager::printIssueDateDay(){

	printf("IssueDateDay %d\n", getTicketField()->getIssueDateDay());

}
void TicketManager::printExpirationDateYear(){

	printf("ExpirationDateYear %d\n", getTicketField()->getExpirationDateYear());

}
void TicketManager::printExpirationDateMonth(){

	printf("ExpirationDateMonth %d\n", getTicketField()->getExpirationDateMonth());

}
void TicketManager::printExpirationDateDay(){

	printf("ExpirationDateDay %d\n", getTicketField()->getExpirationDateDay());

}
void TicketManager::printSurName(){

	printf("SurName %s\n", getTicketField()->getSurName().c_str());

}
void TicketManager::printName(){

	printf("Name %s\n", getTicketField()->getName().c_str());

}
void TicketManager::printFatherName(){

	printf("FatherName %s\n", getTicketField()->getFatherName().c_str());

}
void TicketManager::printFaculty(){

	printf("Faculty %s\n", getTicketField()->getFaculty().c_str());

}
void TicketManager::printStructuredUnit(){

	printf("StructuredUnit %s\n", getTicketField()->getStructuredUnit().c_str());

}
void TicketManager::printStudyType(){

	printf("StudyType %s\n", getTicketField()->getStudyType().c_str());

}
void TicketManager::printSpecialization(){

	printf("Specialization %s\n", getTicketField()->getSpecialization().c_str());

}
void TicketManager::printGroup(){

	printf("Group %s\n", getTicketField()->getGroup().c_str());

}
void TicketManager::printEntranceYear(){

	printf("EntranceYear %d\n", getTicketField()->getEntranceYear());

}
void TicketManager::printRectorCredential(){

	printf("RectorCredentials %s\n", getTicketField()->getRectorCredentials().c_str());

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

StudentTicket * TicketManager::getTicketField(){

	return ticket;

}
string TicketManager::getfPart(){

	return fPart;

}
long long TicketManager::getfId(){

	return fId;

}

void TicketManager::readUniversity(){

	getTicketField()->setUniversity(Reader::readStringLine());

}

void TicketManager::readPart(){

	getTicketField()->setPart(Reader::readStringLine());

}

void TicketManager::readId(){

	getTicketField()->setId(Reader::readLongLongLine());

}

void TicketManager::readIssueDateYear(){

	getTicketField()->setIssueDateYear(Reader::readIntLine());

}

void TicketManager::readIssueDateMonth(){

	getTicketField()->setIssueDateMonth(Reader::readIntLine());

}

void TicketManager::readIssueDateDay(){

	getTicketField()->setIssueDateDay(Reader::readIntLine());

}

void TicketManager::readExpirationDateYear(){

	getTicketField()->setExpirationDateYear(Reader::readIntLine());

}

void TicketManager::readExpirationDateMonth(){

	getTicketField()->setExpirationDateMonth(Reader::readIntLine());

}

void TicketManager::readExpirationDateDay(){

	getTicketField()->setExpirationDateDay(Reader::readIntLine());

}

void TicketManager::readSurName(){

	getTicketField()->setSurName(Reader::readStringLine());

}

void TicketManager::readName(){

	getTicketField()->setName(Reader::readStringLine());

}

void TicketManager::readFatherName(){

	getTicketField()->setFatherName(Reader::readStringLine());

}

void TicketManager::readFaculty(){

	getTicketField()->setFaculty(Reader::readStringLine());

}

void TicketManager::readStructuredUnit(){

	getTicketField()->setStructuredUnit(Reader::readStringLine());

}

void TicketManager::readStudyType(){

	getTicketField()->setStudyType(Reader::readStringLine());

}

void TicketManager::readSpecialization(){

	getTicketField()->setSpecialization(Reader::readStringLine());

}

void TicketManager::readGroup(){

	getTicketField()->setGroup(Reader::readStringLine());

}

void TicketManager::readEntranceYear(){

	getTicketField()->setEntranceYear(Reader::readIntLine());

}

void TicketManager::readRectorCredential(){

	getTicketField()->setRectorCredentials(Reader::readStringLine());

}

void TicketManager::fPartSetup(string fPart){

	this->fPart = fPart;

}
void TicketManager::fIdSetup(long long fId){

	this->fId = fId;

}

bool TicketManager::openTicket(){

	char * buff = new char[100];
		
	sprintf(buff, "./data/%s_%lld", getfPart().c_str(), getfId());	
	if (!freopen(buff, "r", stdin)){
	
		printf("Ticket not found.\n");
		return false;
	
	}
	
	delete buff;	
	return true;

}

void TicketManager::readAllTicketData(){

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

}

bool TicketManager::readticket(){

	if (!openTicket()) return false;	
	readAllTicketData();
	return true;

}

bool TicketManager::getTicket(){

	if (!readticket())
		return false;
	showticket();
	return true;

}

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

