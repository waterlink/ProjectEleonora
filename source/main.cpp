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

#include "StudentTicket.hpp"

#include <cstdio>

int main(int argc, char ** argv){

	StudentTicket * ticket = new StudentTicket;
	
/*	string University;
	string Part;
	long long Id;
	int IssueDateYear;
	int IssueDateMonth;
	int IssueDateDay;
	int ExpirationDateYear;
	int ExpirationDateMonth;
	int ExpirationDateDay;
	string SurName;
	string Name;
	string FatherName;
	string Faculty;
	string StructuredUnit;
	string StudyType;
	string Specialization;
	string Group;
	int EntranceYear;
	string RectorCredentials;
	int ** Photo;
	int * BarCode;*/

	printf("University %s\n", ticket->getUniversity());
	printf("Part %s\n", ticket->getPart());
	printf("Id %lld\n", ticket->getId());
	printf("IssueDateYear %d\n", ticket->getIssueDateYear());
	printf("IssueDateMonth %d\n", ticket->getIssueDateMonth());
	printf("IssueDateDay %d\n", ticket->getIssueDateDay());
	printf("ExpirationDateYear %d\n", ticket->getExpirationDateYear());
	printf("ExpirationDateMonth %d\n", ticket->getExpirationDateMonth());
	printf("ExpirationDateDay %d\n", ticket->getExpirationDateDay());
	printf("SurName %s\n", ticket->getSurName());
	printf("Name %s\n", ticket->getName());
	printf("FatherName %s\n", ticket->getFatherName());
	printf("Faculty %s\n", ticket->getFaculty());
	printf("StructuredUnit %s\n", ticket->getStructuredUnit());
	printf("StudyType %s\n", ticket->getStudyType());
	printf("Specialization %s\n", ticket->getSpecialization());
	printf("Group %s\n", ticket->getGroup());
	printf("EntranceYear %d\n", ticket->getEntranceYear());
	printf("RectorCredentials %s\n", ticket->getRectorCredentials());
	printf("Photo %s\n", "< photo sample >");
	printf("BarCode %s\n", "< barcode sample >");			

	return 0;

}

