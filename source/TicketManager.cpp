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

/*class TicketManager
source*/

#include "TicketManager.hpp"
#include "Reader.hpp"

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


//----------------------------------------------

void TicketReader::readUniversity(){

	getTicketField()->setUniversity(Reader::readStringLine());

}

void TicketReader::readPart(){

	getTicketField()->setPart(Reader::readStringLine());

}

void TicketReader::readId(){

	getTicketField()->setId(Reader::readLongLongLine());

}

void TicketReader::readIssueDateYear(){

	getTicketField()->setIssueDateYear(Reader::readIntLine());

}

void TicketReader::readIssueDateMonth(){

	getTicketField()->setIssueDateMonth(Reader::readIntLine());

}

void TicketReader::readIssueDateDay(){

	getTicketField()->setIssueDateDay(Reader::readIntLine());

}

void TicketReader::readExpirationDateYear(){

	getTicketField()->setExpirationDateYear(Reader::readIntLine());

}

void TicketReader::readExpirationDateMonth(){

	getTicketField()->setExpirationDateMonth(Reader::readIntLine());

}

void TicketReader::readExpirationDateDay(){

	getTicketField()->setExpirationDateDay(Reader::readIntLine());

}

void TicketReader::readSurName(){

	getTicketField()->setSurName(Reader::readStringLine());

}

void TicketReader::readName(){

	getTicketField()->setName(Reader::readStringLine());

}

void TicketReader::readFatherName(){

	getTicketField()->setFatherName(Reader::readStringLine());

}

void TicketReader::readFaculty(){

	getTicketField()->setFaculty(Reader::readStringLine());

}

void TicketReader::readStructuredUnit(){

	getTicketField()->setStructuredUnit(Reader::readStringLine());

}

void TicketReader::readStudyType(){

	getTicketField()->setStudyType(Reader::readStringLine());

}

void TicketReader::readSpecialization(){

	getTicketField()->setSpecialization(Reader::readStringLine());

}

void TicketReader::readGroup(){

	getTicketField()->setGroup(Reader::readStringLine());

}

void TicketReader::readEntranceYear(){

	getTicketField()->setEntranceYear(Reader::readIntLine());

}

void TicketReader::readRectorCredential(){

	getTicketField()->setRectorCredentials(Reader::readStringLine());

}

TicketReader::TicketReader(){}
TicketReader::~TicketReader(){}

void TicketReader::SetupTicket(StudentTicket * ticket){

	this->ticket = ticket;

}
StudentTicket * TicketReader::getStudentTicketField(){

	return ticket;

}

