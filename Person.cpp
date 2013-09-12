//
//  Person.cpp
//  HappyDevelopersDay
//
//  Created by Valentine on 12.09.13.
//  Copyright (c) 2013 silvansky. All rights reserved.
//

#include "Person.h"

#include <iostream>

Person::Person(const std::string &name) : _name(name)
{
}

Person::~Person()
{
}

std::string Person::name() const
{
	return _name;
}

void Person::setName(const std::string &name)
{
	_name = name;
}

void Person::sayHelloTo(const Person *const person)
{
	std::cout << "Hello, " << person->name() << "!" << std::endl;
}
