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

/*class Reader
source*/

#include "Reader.hpp"

string Reader::readStringLine(){

	string str;
	getline(cin, str);
	return str;

}
int Reader::readIntLine(){

	int y;
	sscanf(Reader::readStringLine().c_str(), "%d", &y);
	return y;

}
long long Reader::readLongLongLine(){

	long long x;
	sscanf(Reader::readStringLine().c_str(), "%lld", &x);
	return x;

}

