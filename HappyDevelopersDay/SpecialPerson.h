//
//  SpecialPerson.h
//  HappyDevelopersDay
//
//  Created by Valentine on 12.09.13.
//  Copyright (c) 2013 silvansky. All rights reserved.
//

#ifndef SPECIALPERSON_H
#define SPECIALPERSON_H

#include "Person.h"

class SpecialPerson : public Person
{
public:
	SpecialPerson(const std::string &name, const std::string &position);
	virtual ~SpecialPerson();
	std::string position() const;
	void setPosition(const std::string &position);

	void giveABeerTo(const SpecialPerson &person);
private:
	std::string _position;
};

#endif // SPECIALPERSON_H
