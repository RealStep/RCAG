#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <string>
#include <chrono>
#include <thread>

#include "colours.h"

using namespace std;

extern string username;
extern string start;

int load() {
	Colour::Modifier red(Colour::FG_RED);
	Colour::Modifier bold(Colour::TY_BOLD);
	cout << red << bold << "=============================================" << endl;
	cout << "          Hello and welcome to the          " << endl;
	cout << "      RealStep Console Adventure Game,      " << endl;
	cout << "             or RCAG for short!             " << endl;
	cout << "============================================" << endl;
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "       What do you want to be called?       " << endl;
	cin >> username;
	cout << "     good choice, " << username << "!" << endl;
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "============================================" << endl;
	cout << "          Choose your paths wisely!         " << endl;
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "============================================" << endl;
}

int finish() {
	Colour::Modifier def(Colour::FG_DEFAULT);
	Colour::Modifier reset(Colour::TY_RESET);
	cout << "                 game stuff                 "<< endl;
	cout << "============================================" << def << reset << endl;
	this_thread::sleep_for(chrono::milliseconds(1000));
	return 0;
}

#endif
