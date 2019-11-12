#include "student.h"

student::student()
{
	major = "";
	person();
}

student::student(std::string nparam, std::string bparam, std::string mparam)
{
	setName(nparam);
	setBirthday(bparam);
	major = mparam;
}

void student::setMajor(std::string m)
{
	major = m;
}

std::string student::getMajor() const
{
	return major;
}