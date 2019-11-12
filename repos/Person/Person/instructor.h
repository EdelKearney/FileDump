#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include <string>
#include "person.h"

class instructor : public person
{
public:
	instructor();
	instructor(std::string nparam, std::string bparam, float sparam);
	void setSalary(float s);
	float getSalary() const;
private:
	float salary;
};

#endif // INSTRUCTOR_HINSTRUCTOR_H

