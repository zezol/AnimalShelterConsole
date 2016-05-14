/*
 * Program.h
 *
 *  Created on: 14 maj 2016
 *      Author: kacper
 */

#ifndef PROGRAM_H_
#define PROGRAM_H_

#include "Shelter.h"

enum ProgramStatus {
	RUN, QUIT
};

class Program {
private:
	ProgramStatus _status;
	Shelter _shelter;

	void showMenu();
	void eventLoop();
	void processInput();
	void addNewAnimal();
	void removeAnimal();
	void showStatus();
	void quitProgram();
public:
	Program();

	void run();
};

#endif /* PROGRAM_H_ */
