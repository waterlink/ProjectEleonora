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
	reader = new TicketReader;
	reader->SetupTicket(ticket);
	printer = new TicketPrinter;
	printer->SetupTicket(ticket);

}
TicketManager::~TicketManager(){

	delete ticket;
	delete reader;
	delete printer;

}

void TicketManager::showticket(){

	getPrinterField()->printUniversity();
	getPrinterField()->printPart();
	getPrinterField()->printId();
	getPrinterField()->printIssueDateYear();
	getPrinterField()->printIssueDateMonth();
	getPrinterField()->printIssueDateDay();
	getPrinterField()->printExpirationDateYear();
	getPrinterField()->printExpirationDateMonth();
	getPrinterField()->printExpirationDateDay();
	getPrinterField()->printSurName();
	getPrinterField()->printName();
	getPrinterField()->printFatherName();
	getPrinterField()->printFaculty();
	getPrinterField()->printStructuredUnit();
	getPrinterField()->printStudyType();
	getPrinterField()->printSpecialization();
	getPrinterField()->printGroup();
	getPrinterField()->printEntranceYear();
	getPrinterField()->printRectorCredential();
	getPrinterField()->printPhoto();
	getPrinterField()->printBarCode();

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

	getReaderField()->readUniversity();
	getReaderField()->readPart();
	getReaderField()->readId();
	getReaderField()->readIssueDateYear();
	getReaderField()->readIssueDateMonth();
	getReaderField()->readIssueDateDay();
	getReaderField()->readExpirationDateYear();
	getReaderField()->readExpirationDateMonth();
	getReaderField()->readExpirationDateDay();
	getReaderField()->readSurName();
	getReaderField()->readName();
	getReaderField()->readFatherName();
	getReaderField()->readFaculty();
	getReaderField()->readStructuredUnit();
	getReaderField()->readStudyType();
	getReaderField()->readSpecialization();
	getReaderField()->readGroup();
	getReaderField()->readEntranceYear();
	getReaderField()->readRectorCredential();

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

TicketReader * TicketManager::getReaderField(){

	return reader;

}
TicketPrinter * TicketManager::getPrinterField(){

	return printer;

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
StudentTicket * TicketReader::getTicketField(){

	return ticket;

}

//-------------------------------------------------

void TicketPrinter::printUniversity(){

	printf("University %s\n", getTicketField()->getUniversity().c_str());

}
void TicketPrinter::printPart(){

	printf("Part %s\n", getTicketField()->getPart().c_str());

}
void TicketPrinter::printId(){

	printf("Id %lld\n", getTicketField()->getId());

}
void TicketPrinter::printIssueDateYear(){

	printf("IssueDateYear %d\n", getTicketField()->getIssueDateYear());

}
void TicketPrinter::printIssueDateMonth(){

	printf("IssueDateMonth %d\n", getTicketField()->getIssueDateMonth());

}
void TicketPrinter::printIssueDateDay(){

	printf("IssueDateDay %d\n", getTicketField()->getIssueDateDay());

}
void TicketPrinter::printExpirationDateYear(){

	printf("ExpirationDateYear %d\n", getTicketField()->getExpirationDateYear());

}
void TicketPrinter::printExpirationDateMonth(){

	printf("ExpirationDateMonth %d\n", getTicketField()->getExpirationDateMonth());

}
void TicketPrinter::printExpirationDateDay(){

	printf("ExpirationDateDay %d\n", getTicketField()->getExpirationDateDay());

}
void TicketPrinter::printSurName(){

	printf("SurName %s\n", getTicketField()->getSurName().c_str());

}
void TicketPrinter::printName(){

	printf("Name %s\n", getTicketField()->getName().c_str());

}
void TicketPrinter::printFatherName(){

	printf("FatherName %s\n", getTicketField()->getFatherName().c_str());

}
void TicketPrinter::printFaculty(){

	printf("Faculty %s\n", getTicketField()->getFaculty().c_str());

}
void TicketPrinter::printStructuredUnit(){

	printf("StructuredUnit %s\n", getTicketField()->getStructuredUnit().c_str());

}
void TicketPrinter::printStudyType(){

	printf("StudyType %s\n", getTicketField()->getStudyType().c_str());

}
void TicketPrinter::printSpecialization(){

	printf("Specialization %s\n", getTicketField()->getSpecialization().c_str());

}
void TicketPrinter::printGroup(){

	printf("Group %s\n", getTicketField()->getGroup().c_str());

}
void TicketPrinter::printEntranceYear(){

	printf("EntranceYear %d\n", getTicketField()->getEntranceYear());

}
void TicketPrinter::printRectorCredential(){

	printf("RectorCredentials %s\n", getTicketField()->getRectorCredentials().c_str());

}

void TicketPrinter::printPhoto(){

	printf("Photo %s\n", "< photo sample >");

}
void TicketPrinter::printBarCode(){

	printf("BarCode %s\n", "< barcode sample >");

}

void TicketPrinter::SetupTicket(StudentTicket * ticket){

	this->ticket = ticket;

}
StudentTicket * TicketPrinter::getTicketField(){

	return ticket;

}

TicketPrinter::TicketPrinter(){}
TicketPrinter::~TicketPrinter(){}
	

