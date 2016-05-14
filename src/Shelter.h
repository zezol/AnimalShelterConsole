/*
 * Shelter.h
 *
 *  Created on: 14 maj 2016
 *      Author: kacper
 */

#ifndef SHELTER_H_
#define SHELTER_H_

#include <vector>
#include "Animal.h"

class Shelter {
private:
	std::vector<anm::Animal> _animalsList;
public:
	static const int MAX_SLOTS = 20;

	anm::Animal getAnimal(int whichAnimal);
	int getShelterCurrentSize();

	void addAnimal(std::string name, std::string breed, unsigned int age);
	void removeAnimal(std::string name);
};

#endif /* SHELTER_H_ */
