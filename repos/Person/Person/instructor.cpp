#include "instructor.h"

instructor::instructor()
{
	salary = 0.0f;
	person();
}

instructor::instructor(std::string nparam, std::string bparam, float sparam)
{
	setName(nparam);
	setBirthday(bparam);
	salary = sparam;
}

void instructor::setSalary(float s)
{
	salary = s;
}

float instructor::getSalary() const
{
	return salary;
}