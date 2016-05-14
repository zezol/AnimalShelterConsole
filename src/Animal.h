/*
 * Animal.h
 *
 *  Created on: 14 maj 2016
 *      Author: kacper
 */

#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <string>

namespace anm {

struct Animal {
	std::string name;
	std::string breed;
	unsigned int age;
};

} // namespace anm

#endif /* ANIMAL_H_ */
