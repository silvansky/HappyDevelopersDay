//
//  Internet.cpp
//  HappyDevelopersDay
//
//  Created by Valentine on 12.09.13.
//  Copyright (c) 2013 silvansky. All rights reserved.
//

#include "Internet.h"

#include "Developer.h"

Internet::Internet()
{
	// TODO: connect to real Internet
}

Internet::~Internet()
{
	// TODO: disconnect
}

Internet *Internet::sharedInstance()
{
	Internet *_sharedInstance = nullptr;
	if (_sharedInstance == nullptr)
	{
		_sharedInstance = new Internet();
	}
	return _sharedInstance;
}

void Internet::grabAllDevelopers(SpecialPersonsList &list)
{
	// TODO: grab real developers
	// TODO: get rid of dummy developers

	static std::string dummyDevelopersInfo[] = {
		"Petya", "C",
		"Vasya", "PHP",
		"Gena", "C++",
		"Mark", "Java",
		"Julia", "D",
		"Kolya", "Ruby",
		"Stas", "Scala",
		"Sasha", "Brainfuck",
		"Tanya", "Lua",
		"Oleg", "Closure",
		"Roma", "C#",
		"Grisha", "Python",
		"Mons", "Perl",
		"Katya", "BASIC",
		"Zhenya", "Objective-C",
		"Ivan", "ASM",
		"Borya", "JavaScript",
		"Dima", "Bash",
		"Olya", "Dart",
		"Igor", "J#",
		""
	};

	size_t i = 0;
	while (!dummyDevelopersInfo[i].empty())
	{
		std::string name = dummyDevelopersInfo[i++];
		std::string lang = dummyDevelopersInfo[i++];
		Developer *d = new Developer(name, lang);
		list.push_back(d);
	}
}
