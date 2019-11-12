#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "person.h"

class student : public person
{
public:
	student();
	student(std::string nparam, std::string bparam, std::string mparam);
	void setMajor(std::string m);
	std::string getMajor() const;
private:
	std::string major;
};

#endif // INSTRUCTOR_H
