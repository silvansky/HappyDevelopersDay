//
//  Person.h
//  HappyDevelopersDay
//
//  Created by Valentine on 12.09.13.
//  Copyright (c) 2013 silvansky. All rights reserved.
//

#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
public:
	Person(const std::string &name);
	virtual ~Person();
	std::string name() const;
	void setName(const std::string &name);

	void sayHelloTo(const Person *const person);
private:
	std::string _name;
};

#endif // PERSON_H
