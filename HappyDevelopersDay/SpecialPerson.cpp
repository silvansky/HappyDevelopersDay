//
//  SpecialPerson.cpp
//  HappyDevelopersDay
//
//  Created by Valentine on 12.09.13.
//  Copyright (c) 2013 silvansky. All rights reserved.
//

#include "SpecialPerson.h"

#include <iostream>

SpecialPerson::SpecialPerson(const std::string &name, const std::string &position) : Person(name), _position(position)
{
}

SpecialPerson::~SpecialPerson()
{
}

std::string SpecialPerson::position() const
{
	return _position;
}

void SpecialPerson::setPosition(const std::string &position)
{
	_position = position;
}

void SpecialPerson::giveABeerTo(const SpecialPerson &person)
{
	std::cout << "Hey, your position is " << person.position() << ", so have a beer!" << std::endl;
}
