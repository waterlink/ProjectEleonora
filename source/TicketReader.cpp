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

/*class TicketReader
source*/

#include "TicketReader.hpp"
#include "Reader.hpp"

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


