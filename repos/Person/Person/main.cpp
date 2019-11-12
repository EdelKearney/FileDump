#include <iostream>
#include "person.h"
#include "student.h"
#include "instructor.h"

int main()
{
	student s1;
	 instructor i1;

	 s1.setName("John Smith");
	 s1.setBirthday("10th January");
	 s1.setMajor("Physics");

	 i1.setName("Kevin Jones");
	 i1.setBirthday("14th May");
	 i1.setSalary(50000.0);

}