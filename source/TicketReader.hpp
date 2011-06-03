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
header*/

#ifndef __TicketReader_H__
#define __TicketReader_H__

#include <cstdio>

#include "StudentTicket.hpp"

#include <iostream>

class TicketReader{

public:

	TicketReader();
	~TicketReader();
	
	void SetupTicket(StudentTicket * ticket);
	StudentTicket * getTicketField();
	
	void readUniversity();
	void readPart();
	void readId();
	void readIssueDateYear();
	void readIssueDateMonth();
	void readIssueDateDay();
	void readExpirationDateYear();
	void readExpirationDateMonth();
	void readExpirationDateDay();
	void readSurName();
	void readName();
	void readFatherName();
	void readFaculty();
	void readStructuredUnit();
	void readStudyType();
	void readSpecialization();
	void readGroup();
	void readEntranceYear();
	void readRectorCredential();

private:

	StudentTicket * ticket;

};

#endif /* __TicketReader_H__ */


