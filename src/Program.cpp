/*
 * Program.cpp
 *
 *  Created on: 14 maj 2016
 *      Author: kacper
 */

#include <iostream>
#include <cstdlib>
#include "Program.h"
#include "Shelter.h"

Program::Program() :
		_status(ProgramStatus::RUN) {

}

void Program::run() {
	eventLoop();
}

void Program::eventLoop() {
	while (_status == ProgramStatus::RUN) {
		showMenu();
		processInput();
	}
}

void Program::processInput() {
	int choice;
	do {
		std::cout << "Your choice: " << std::flush;
		std::cin >> choice;
		if (choice < 1 || choice > 4) {
			std::cout << "You've entered wrong number!" << std::endl;
		}
	} while (choice < 1 && choice > 4);

	switch (choice) {
	case 1:
		addNewAnimal();
		break;
	case 2:
		removeAnimal();
		break;
	case 3:
		showStatus();
		break;
	case 4:
		quitProgram();
		break;
	}
}

void Program::showMenu() {
	std::cout << "====================" << std::endl;
	std::cout << "1. Add animal" << std::endl;
	std::cout << "2. Remove animal" << std::endl;
	std::cout << "3. Status" << std::endl;
	std::cout << "4. Quit" << std::endl;
	std::cout << "====================" << std::endl;
}

void Program::quitProgram() {
	std::cout << "Quitting" << std::endl;
	_status = ProgramStatus::QUIT;
}

void Program::addNewAnimal() {
	std::cout << "Podaj imie: " << std::flush;
	std::string name;
	std::cin >> name;

	std::cout << "Podaj rase: " << std::flush;
	std::string breed;
	std::cin >> breed;

	std::cout << "Podaj wiek: " << std::flush;
	unsigned int age;
	std::cin >> age;

	_shelter.addAnimal(name, breed, age);
	std::cout << "Dodano nowe zwierze!" << std::endl;
}

void Program::showStatus() {
	std::cout << "Zwierzeta w schronisku: " << std::endl;
	for (int i = 0; i < _shelter.getShelterCurrentSize(); i++) {
		anm::Animal tmpAnimal = _shelter.getAnimal(i);
		std::cout << "Imie: " << tmpAnimal.name << std::endl;
		std::cout << "Rasa: " << tmpAnimal.breed << std::endl;
		std::cout << "Wiek: " << tmpAnimal.age << std::endl;
		std::cout << std::endl;
	}
}

void Program::removeAnimal() {
	std::cout << "Podaj imie zwierzaka do usuniecia: " << std::flush;
	std::string name;
	std::cin >> name;
	_shelter.removeAnimal(name);
}

