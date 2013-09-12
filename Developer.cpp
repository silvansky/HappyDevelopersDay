//
//  Developer.cpp
//  HappyDevelopersDay
//
//  Created by Valentine on 12.09.13.
//  Copyright (c) 2013 silvansky. All rights reserved.
//

#include "Developer.h"

#include <iostream>

Developer::Developer(const std::string &name, const std::string &programmingLanguage) : SpecialPerson(name, "Developer"), _programmingLanguage(programmingLanguage)
{
}

Developer::~Developer()
{
}

std::string Developer::programmingLanguage() const
{
	return _programmingLanguage;
}

void Developer::setProgrammingLanguage(const std::string &programmingLanguage)
{
	_programmingLanguage = programmingLanguage;
}

void Developer::giveABeerToDeveloper(const Developer *const developer)
{
	std::cout << "Hey! You are developer! No matter that you\'re programming in " << developer->programmingLanguage() << ", today is our common holiday, so have a beer!" << std::endl;
}
