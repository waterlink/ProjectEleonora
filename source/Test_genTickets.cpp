/*Copyright (c) 2011 Fedorov Alexey.

Author: Fedorov Alexey.
Type: Open-Source Project.
Platform: Linux.
Codename: Project Eleonora.

Student sts accounting system.

This software is provided 'as-is', without any express or implied
warranty. In no event will the authors be held liable for any damages
arising from the use of this software.
*/

#include "Test_genTickets.hpp"

#include <cstdio>
#include <cstdlib>
#include <iostream>

#include "StudentTicket.hpp"

int randint(int l, int r){

	return rand() % (r - l) + l;

}

string randstr(int llen, int rlen, int lc, int rc){

	string res = "";
	
	int len = randint(llen, rlen);
	for (int i = 0; i < len; ++i){
	
		char ch = randint(lc, rc);
		res.push_back(ch);
		
	}
	
	return res;

}

int main (int argc, char const* argv[]){

	StudentTicket * st = new StudentTicket;
	char buffer[50];

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
	string RectorCredentials;*/
	
	for (int i = 5; i < 200; ++i){
	
		st->setUniversity(randstr(5, 20, 'a', 'z'));
		st->setPart(randstr(5, 20, 'a', 'z'));
		st->setId(randint(100000000, 100010000));
		st->setIssueDateYear(randint(2000, 2011));
		st->setIssueDateMonth(randint(1, 12));
		st->setIssueDateDay(randint(1, 28));
		st->setExpirationDateYear(randint(st->getIssueDateYear() + 4, st->getIssueDateYear() + 7));
		st->setExpirationDateMonth(randint(1, 12));
		st->setExpirationDateDay(randint(1, 28));
		st->setSurName(randstr(5, 20, 'a', 'z'));
		st->setName(randstr(5, 20, 'a', 'z'));
		st->setFatherName(randstr(5, 20, 'a', 'z'));
		st->setFaculty(randstr(5, 20, 'a', 'z'));
		st->setStructuredUnit(randstr(5, 20, 'a', 'z'));
		st->setStudyType(randstr(5, 20, 'a', 'z'));
		st->setSpecialization(randstr(5, 20, 'a', 'z'));
		st->setGroup(randstr(5, 20, 'a', 'z'));
		st->setEntranceYear(st->getIssueDateYear());
		st->setRectorCredentials(randstr(5, 20, 'a', 'z'));
	
		sprintf(buffer, "./test/tests/test%d.test", i);	
		freopen(buffer, "w", stdout);		
		printf("%s %lld\n", st->getPart().c_str(), st->getId());
		
		sprintf(buffer, "./data/%s_%lld", st->getPart().c_str(), st->getId());
		freopen(buffer, "w", stdout);
	
		printf("%s\n", st->getUniversity().c_str());
		printf("%s\n", st->getPart().c_str());
		printf("%lld\n", st->getId());
		printf("%d\n", st->getIssueDateYear());
		printf("%d\n", st->getIssueDateMonth());
		printf("%d\n", st->getIssueDateDay());
		printf("%d\n", st->getExpirationDateYear());
		printf("%d\n", st->getExpirationDateMonth());
		printf("%d\n", st->getExpirationDateDay());
		printf("%s\n", st->getSurName().c_str());
		printf("%s\n", st->getName().c_str());
		printf("%s\n", st->getFatherName().c_str());
		printf("%s\n", st->getFaculty().c_str());
		printf("%s\n", st->getStructuredUnit().c_str());
		printf("%s\n", st->getStudyType().c_str());
		printf("%s\n", st->getSpecialization().c_str());
		printf("%s\n", st->getGroup().c_str());
		printf("%d\n", st->getEntranceYear());
		printf("%s\n", st->getRectorCredentials().c_str());
		printf("%s\n", "0");
		printf("%s\n", "0");
	
	}
	
	for (int i = 201; i < 250; ++i){
	
		st->setPart(randstr(5, 20, 'a', 'z'));
		st->setId(randint(100000000, 100010000));
	
		sprintf(buffer, "./test/tests/test%d.test", i);	
		freopen(buffer, "w", stdout);		
		printf("%s %lld\n", st->getPart().c_str(), st->getId());
		
		sprintf(buffer, "./data/%s_%lld", st->getPart().c_str(), st->getId());
	
	}
	
	return 0;
}


