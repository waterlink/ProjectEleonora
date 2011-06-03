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
header*/

#ifndef __Reader_H__
#define __Reader_H__

#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

class Reader{

public:

	static string readStringLine();
	static int readIntLine();
	static long long readLongLongLine();

};

#endif /* __Reader_H__ */

