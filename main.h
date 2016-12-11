#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

unsigned int microseconds;
extern string username;
extern string start;

int load() {
	cout << "==================================" << endl;
	cout << "     Hello and welcome to the     " << endl;
	cout << " RealStep Console Adventure Game, " << endl;
	cout << "        or RCAG for short!        " << endl;
	cout << "==================================" << endl;
	cout << "  What do you want to be called?  " << endl;
	cin >> username;
	cout << "good choice, " << username << "!" << endl;
	cout << "==================================" << endl;
	cout << "     Choose your paths wisely!    " << endl;
	cout << "==================================" << endl;
	cout << "           STARTING GAME          " << endl;
	cout << "==================================" << endl;
}

int finish() {
	cout << "==================================" << endl;
	cout << "            ENDING GAME           " << endl;
	cout << "==================================" << endl;
	return 0;
}

#endif
