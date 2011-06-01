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

/*class-source StudentTicket

main entity of application
*/

#include "StudentTicket.hpp"

StudentTicket::StudentTicket(){

	// sample here :)
	
	University		=	"Donetsk National University";
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
	BarCode			=	0;

}
StudentTicket::~StudentTicket(){}


