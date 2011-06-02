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

void TicketManager::showticket(StudentTicket * ticket){

	printf("University %s\n", ticket->getUniversity().c_str());
	printf("Part %s\n", ticket->getPart().c_str());
	printf("Id %lld\n", ticket->getId());
	printf("IssueDateYear %d\n", ticket->getIssueDateYear());
	printf("IssueDateMonth %d\n", ticket->getIssueDateMonth());
	printf("IssueDateDay %d\n", ticket->getIssueDateDay());
	printf("ExpirationDateYear %d\n", ticket->getExpirationDateYear());
	printf("ExpirationDateMonth %d\n", ticket->getExpirationDateMonth());
	printf("ExpirationDateDay %d\n", ticket->getExpirationDateDay());
	printf("SurName %s\n", ticket->getSurName().c_str());
	printf("Name %s\n", ticket->getName().c_str());
	printf("FatherName %s\n", ticket->getFatherName().c_str());
	printf("Faculty %s\n", ticket->getFaculty().c_str());
	printf("StructuredUnit %s\n", ticket->getStructuredUnit().c_str());
	printf("StudyType %s\n", ticket->getStudyType().c_str());
	printf("Specialization %s\n", ticket->getSpecialization().c_str());
	printf("Group %s\n", ticket->getGroup().c_str());
	printf("EntranceYear %d\n", ticket->getEntranceYear());
	printf("RectorCredentials %s\n", ticket->getRectorCredentials().c_str());
	printf("Photo %s\n", "< photo sample >");
	printf("BarCode %s\n", "< barcode sample >");

}

bool TicketManager::readticket(StudentTicket * ticket, string Part, long long Id){

	string str;
	long long x;
	int y;

	string fPart = Part;
	long long fId = Id;
	
	char buff[100];
	sprintf(buff, "./data/%s_%lld", fPart.c_str(), fId);
	
	string fPath = buff;
	
	if (!freopen(fPath.c_str(), "r", stdin)){
	
		printf("Ticket not found.\n");
		return false;
	
	}
	
	getline(cin, str);
	ticket->setUniversity(str);
	
	getline(cin, str);
	ticket->setPart(str);
	
	getline(cin, str);
	sscanf(str.c_str(), "%lld", &x);
	ticket->setId(x);
	
	getline(cin, str);
	sscanf(str.c_str(), "%d", &y);
	ticket->setIssueDateYear(y);
	
	getline(cin, str);
	sscanf(str.c_str(), "%d", &y);
	ticket->setIssueDateMonth(y);
	
	getline(cin, str);
	sscanf(str.c_str(), "%d", &y);
	ticket->setIssueDateDay(y);
	
	getline(cin, str);
	sscanf(str.c_str(), "%d", &y);
	ticket->setExpirationDateYear(y);
	
	getline(cin, str);
	sscanf(str.c_str(), "%d", &y);
	ticket->setExpirationDateMonth(y);
	
	getline(cin, str);
	sscanf(str.c_str(), "%d", &y);
	ticket->setExpirationDateDay(y);
	
	getline(cin, str);
	ticket->setSurName(str);
	
	getline(cin, str);
	ticket->setName(str);
	
	getline(cin, str);
	ticket->setFatherName(str);
	
	getline(cin, str);
	ticket->setFaculty(str);
	
	getline(cin, str);
	ticket->setStructuredUnit(str);
	
	getline(cin, str);
	ticket->setStudyType(str);
	
	getline(cin, str);
	ticket->setSpecialization(str);
	
	getline(cin, str);
	ticket->setGroup(str);
	
	getline(cin, str);
	sscanf(str.c_str(), "%d", &y);
	ticket->setEntranceYear(y);
	
	getline(cin, str);
	ticket->setRectorCredentials(str);
	
	return true;

}

bool TicketManager::getTicket(string Part, long long Id){

	StudentTicket * ticket = new StudentTicket;
	
	if (!readticket(ticket, Part, Id))
		return false;
	
	showticket(ticket);
	
	delete ticket;
	
	return true;

}

int main(int argc, char ** argv){

	string str;
	long long x;
	int y;

	//StudentTicket * ticket = new StudentTicket;
	
	if (argc < 2){
	
		printf("usage: x Part Id\n");
		return 0;
		
	}
	
	string Part = argv[1];
	
	string IdString = argv[2];
	sscanf(IdString.c_str(), "%lld", &x);
	
	long long Id = x;
	
	TicketManager * tm = new TicketManager;
	
	tm->getTicket(Part, Id);
	
	delete tm;

	return 0;

}

