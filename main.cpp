//
//  main.cpp
//  HappyDevelopersDay
//
//  Created by Valentine on 12.09.13.
//  Copyright (c) 2013 silvansky. All rights reserved.
//

#include <iostream>
#include <time.h>
#include "Internet.h"
#include "Developer.h"

int main(int argc, const char * argv[])
{
	time_t today = time(NULL);
	struct tm *todayInfo = localtime(&today);
	if (todayInfo->tm_yday != 0xff)
	{
		std::cout << "Today is a usual day..." << std::endl;
		return 1;
	}

	std::cout << "Today is a special day!" << std::endl;
	std::cout << std::endl;

	Developer me("Valentine", "Objective-C, C++");

	std::cout << "Hello, World! My name is " << me.name() << " and I\'m a " << me.position() << ", I write in " << me.programmingLanguage() << "." << std::endl;
	std::cout << "Today is 0xFF day, so I want to congrat all the developers! Hooray! =)" << std::endl;
	std::cout << std::endl;

	// see http://instacod.es/80286

	SpecialPersonsList list;
	Internet::sharedInstance()->grabAllDevelopers(list);
	for (size_t i = 0; i < list.size(); i++)
	{
		Developer *developer = dynamic_cast<Developer *>(list[i]);
		if (developer)
		{
			me.sayHelloTo(developer);
			me.giveABeerToDeveloper(developer);
		}
	}
	return 0;
}

