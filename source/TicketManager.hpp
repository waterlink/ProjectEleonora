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
header*/

#ifndef __TicketManager_H__
#define __TicketManager_H__

#include <cstdio>

#include "StudentTicket.hpp"
#include "TicketReader.hpp"
#include "TicketPrinter.hpp"

#include <iostream>

class TicketManager{

public:

	TicketManager();
	~TicketManager();
	
	void showticket();
	bool readticket();
	bool getTicket();
	
	void fPartSetup(string fPart);
	void fIdSetup(long long fId);
	
	bool openTicket();
	void readAllTicketData();
	
	StudentTicket * getTicketField();
	string getfPart();
	long long getfId();
	TicketReader * getReaderField();
	TicketPrinter * getPrinterField();

private:

	StudentTicket * ticket;
	string fPart;
	long long fId;
	TicketReader * reader;
	TicketPrinter * printer;

};

#endif /* __TicketManager_H__ */


