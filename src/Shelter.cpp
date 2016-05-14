/*
 * Shelter.cpp
 *
 *  Created on: 14 maj 2016
 *      Author: kacper
 */

#include <iostream>
#include "Shelter.h"

anm::Animal Shelter::getAnimal(int whichAnimal) {
	return _animalsList[whichAnimal];
}

int Shelter::getShelterCurrentSize() {
	return _animalsList.size();
}

void Shelter::addAnimal(std::string name, std::string breed, unsigned int age) {
	anm::Animal tmpAnimal;
	tmpAnimal.name = name;
	tmpAnimal.breed = breed;
	tmpAnimal.age = age;
	_animalsList.push_back(tmpAnimal);
}

void Shelter::removeAnimal(std::string name) {
	unsigned int i;
	for (i = 0; i < _animalsList.size(); i++) {
		anm::Animal tmpAnimal;
		tmpAnimal.name = _animalsList[i].name;
		if(tmpAnimal.name == name) {
			break;
		}
	}
	if(i < _animalsList.size()) {
		_animalsList.erase(_animalsList.begin() + i);
		std::cout << "Usunieto zwierze" << name << std::endl;
	} else {
		std::cout << "Nie znaleziono zwierzaka o takim imieniu" << std::endl;
	}

}

