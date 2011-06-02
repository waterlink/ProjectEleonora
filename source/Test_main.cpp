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

/*source Test_main
  tester program
*/

#include "Test_main.hpp"

#include <cstdio>
#include <cstdlib>

#include <string>
#include <iostream>

using namespace std;

void cmd(string command){ 

	system(command.c_str()); 
	
}

int main (int argc, char const* argv[]){

	// Path init
	string origpath = "./test/original/x.elf";
	string binpath = "./binary/x.elf";
	string testspath = "./test/tests/";
	string outpath = "./test/out/out.temp";
	string origoutpath = "./test/out/orig.temp";
	string temppath = "./test/temp/temp.temp";
	string exttemppath = "./test/temp/exttemp.temp";
	string diffpath = "./test/diff/";
	string getalltestscommand = "ls " + testspath + "*.test" + " > " + temppath;
	string diffcommand = "diff " + outpath + " " + origoutpath + " > " + temppath;
	string cleancommand = "rm " + outpath + " " + origoutpath + " " + temppath;
	string diffrescommand = "ll " + temppath + " > " + exttemppath;
	
	string runcommand = "";
	string runorigcommand = "";
	
	string difforig = "";
	string diffout = "";
	string diffdiff = "";
	
	char buffer[50];

	// Get list of tests	
	string currtest;
	vector < string > tests;
	tests.clear();
	sys(getalltestscommand);
	if (!freopen(temppath.c_str(), "r", stdin)){
	
		printf("Can't get list of tests\n");
		return 0;
	
	}
	while (getline(cin, currtest))
		tests.push_back(currtest);
	fclose(stdin);
		
	// Enumerate all tests
	string params;
	int aretherediffs;
	for (int i = 0; i < tests.size(); ++i){
	
		// Get params
		stdin = fopen((testspath + tests[i]).c_str(), "r");
		if (!stdin){
		
			printf("There is no such test: %d\n", i);
			return 0;
		
		}
		getline(cin, params);
		fclose(stdin);
		
		// Run program and original
		runcommand = binpath + " " + params + " > " + outpath;
		runorigcommand = origpath + " " + params + " > " + origoutpath;
		sys(runcommand);
		sys(runorigcommand);
		
		// Check if there are any differences
		sys(diffcommand);
		sys(diffrescommand);
		stdin = fopen(exttemppath, "r");
		if (!stdin){
		
			printf("There is no exttemp file\n");
			return 0;
		
		}
		cin >> str >> str >> str >> str >> aretherediffs;
		fclose(stdin);
		
		// Out a result for test
		if (aretherediffs){
		
			printf("Test %d: WA\n", i);
			
			// Setup diff paths
			sprintf(buffer, "%d", i);
			difforig = "cp " + origoutpath + " " + diffpath + buffer + ".orig.test";
			diffout = "cp " + outpath + " " + diffpath + buffer + ".out.test";
			diffdiff = "cp " + temppath + " " + diffpath + buffer + ".diff.test";
			
			// And copy them
			sys(difforig);
			sys(diffout);
			sys(diffdiff);
		
		}
		else printf("Test %d: OK\n", i);
	
	}
	
	return 0;
}

