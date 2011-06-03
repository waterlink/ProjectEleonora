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
header*/

#ifndef __TicketPrinter_H__
#define __TicketPrinter_H__

#include <cstdio>

#include "StudentTicket.hpp"

#include <iostream>

class TicketPrinter{

public:

	TicketPrinter();
	~TicketPrinter();

	void SetupTicket(StudentTicket * ticket);
	StudentTicket * getTicketField();
	
	void printUniversity();
	void printPart();
	void printId();
	void printIssueDateYear();
	void printIssueDateMonth();
	void printIssueDateDay();
	void printExpirationDateYear();
	void printExpirationDateMonth();
	void printExpirationDateDay();
	void printSurName();
	void printName();
	void printFatherName();
	void printFaculty();
	void printStructuredUnit();
	void printStudyType();
	void printSpecialization();
	void printGroup();
	void printEntranceYear();
	void printRectorCredential();
	
	void printPhoto();
	void printBarCode();

private:

	StudentTicket * ticket;

};

#endif /* __TicketPrinter_H__ */


