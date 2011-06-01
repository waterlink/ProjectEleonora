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

/*	University		=	"Donetsk National University";
	Part			=	"CA";
	Id			=	16487351;
	IssueDateYear		=	2009;
	IssueDateMonth		=	9;
	IssueDateDay		=	1;
	ExpirationDateYear	=	2013;
	ExpirationDateMonth	=	6;
	ExpirationDateDay	=	30;
	SurName			=	"Pupkin";
	Name			=	"Vasiliy";
	FatherName		=	"Petrovich";
	Faculty			=	"Physics";
	StructuredUnit		=	"";
	StudyType		=	"Day";
	Specialization		=	"IDSS";
	Group			=	"A";
	EntranceYear		=	2009;
	RectorCredentials	=	"Shevchenko V. P.";
	Photo			=	0;
	BarCode			=	0;*/
	
	string fPart = "KN";
	long long fId = 16487357;
	
	char buff[30];
	sprintf(buff, "./data/%s_%lld", fPart.c_str(), fId);
	
	string fPath = buff;
	
	FILE * fin = fopen(fPath.c_str(), "r");

	return 0;

}

