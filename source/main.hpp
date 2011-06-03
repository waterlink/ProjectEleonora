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

/*header main
*/

#ifndef __main_H__
#define __main_H__

#include <cstdio>

#include "StudentTicket.hpp"

#include <iostream>

class TicketManager{

public:

	TicketManager();
	~TicketManager();
	
	void showticket();
	bool readticket(string Part, long long Id);
	bool getTicket(string Part, long long Id);
	
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

#endif /* __main_H__ */


