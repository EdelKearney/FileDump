#include "person.h"

person::person()
{
	name = "";
	birthday = "";
}

person::person(std::string nparam, std::string bparam)
{
	name = nparam;
	birthday = bparam;
}

std::string person::getName() const
{
	return name;
}

void person::setName(std::string n)
{
	name = n;
}

std::string person::getBirthday() const
{
	return birthday;
}

void person::setBirthday(std::string b)
{
	birthday = b;
}