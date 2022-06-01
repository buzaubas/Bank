#include "Person.h"

Person::Person()
{
}

Person::Person(const char* surname, const char* name, const char* last)
{
	this->surname = surname;
	this->name = name;
	this->last = last;
}

std::string Person::getName()
{
	return this->surname + " " + this->name + " " + this->last;
}
