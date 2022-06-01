#pragma once
#include <iostream>
#include <string>

class Person
{
	std::string surname;
	std::string name;
	std::string last;
public:
	Person();
	Person(const char* surname, const char* name, const char* last);
	std::string getName();
};

