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

/*class TicketPrinter
source*/

#include "TicketPrinter.hpp"

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
