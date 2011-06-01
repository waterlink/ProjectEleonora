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

/*class-header StudentTicket

main entity of application
*/

#ifndef StudentTicket_hpp
#define StudentTicket_hpp

#include <string>

using namespace std;

class StudentTicket{

public:

	StudentTicket();
	~StudentTicket();
	
	int * getBarCode(){ return BarCode; }
	void setBarCode(int * value){ BarCode = value; }
	
	
	
	int ** getPhoto(){ return Photo; }
	void setPhoto(int ** value){ Photo = value; }
	
	
	
	string getRectorCredentials(){ return RectorCredentials; }
	void setRectorCredentials(string value){ RectorCredentials = value; }
	
	
	
	int getEntranceYear(){ return EntranceYear; }
	void setEntranceYear(int value){ EntranceYear = value; }
	
	
	
	string getGroup(){ return Group; }
	void setGroup(string value){ Group = value; }
	
	
	
	string getSpecialization(){ return Specialization; }
	void setSpecialization(string value){ Specialization = value; }
	
	
	
	string getStudyType(){ return StudyType; }
	void setStudyType(string value){ StudyType = value; }
	
	
	
	string getStructuredUnit(){ return StructuredUnit; }
	void setStructuredUnit(string value){ StructuredUnit = value; }
	
	
	
	string getFaculty(){ return Faculty; }
	void setFaculty(string value){ Faculty = value; }
	
	
	
	string getFatherName(){ return FatherName; }
	void setFatherName(string value){ FatherName = value; }
	
	
	
	string getName(){ return Name; }
	void setName(string value){ Name = value; }
	
	
	
	string getSurName(){ return SurName; }
	void setSurName(string value){ SurName = value; }
	
	
	
	int getExpirationDateDay(){ return ExpirationDateDay; }
	void setExpirationDateDay(int value){ ExpirationDateDay = value; }
	
	
	
	int getExpirationDateMonth(){ return ExpirationDateMonth; }
	void setExpirationDateMonth(int value){ ExpirationDateMonth = value; }
	
	
	
	int getExpirationDateYear(){ return ExpirationDateYear; }
	void setExpirationDateYear(int value){ ExpirationDateYear = value; }
	
	
	
	int getIssueDateDay(){ return IssueDateDay; }
	void setIssueDateDay(int value){ IssueDateDay = value; }
	
	
	
	int getIssueDateMonth(){ return IssueDateMonth; }
	void setIssueDateMonth(int value){ IssueDateMonth = value; }
	
	
	
	int getIssueDateYear(){ return IssueDateYear; }
	void setIssueDateYear(int value){ IssueDateYear = value; }
	
	
	
	long long getId(){ return Id; }
	void setId(long long value){ Id = value; }
	
	
	
	string getPart(){ return Part; }
	void setPart(string value){ Part = value; }
	
	
	
	string getUniversity(){ return University; }
	void setUniversity(string value){ University = value; }
	
	
	
private:

	string University;
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
	int * BarCode;

};

#endif

