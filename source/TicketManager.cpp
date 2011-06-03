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


