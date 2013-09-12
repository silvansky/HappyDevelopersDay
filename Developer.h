//
//  Developer.h
//  HappyDevelopersDay
//
//  Created by Valentine on 12.09.13.
//  Copyright (c) 2013 silvansky. All rights reserved.
//

#ifndef DEVELOPER_H
#define DEVELOPER_H

#include "SpecialPerson.h"

class Developer : public SpecialPerson
{
public:
	Developer(const std::string &name, const std::string &programmingLanguage);
	virtual ~Developer();
	std::string programmingLanguage() const;
	void setProgrammingLanguage(const std::string &programmingLanguage);

	void giveABeerToDeveloper(const Developer *const developer);
private:
	std::string _programmingLanguage;
};

#endif // DEVELOPER_H
