//
//  Internet.h
//  HappyDevelopersDay
//
//  Created by Valentine on 12.09.13.
//  Copyright (c) 2013 silvansky. All rights reserved.
//

#ifndef INTERNET_H
#define INTERNET_H

#include "SpecialPersonsList.h"

class Internet
{
protected:
	Internet();
	~Internet();
public:
	static Internet *sharedInstance();

	void grabAllDevelopers(SpecialPersonsList &list);
};

#endif // INTERNET_H
