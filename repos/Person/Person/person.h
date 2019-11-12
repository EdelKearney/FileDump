#ifndef PERSON_H
#define PERSON_H
#include <string>

class person
{
private:
	std::string name;
	std::string birthday;
public:
		person();
		person(std::string nparam, std::string bparam);
		std::string getName() const;
		void setName(std::string n);
		std::string getBirthday() const;
		void setBirthday(std::string b);

};

#endif // !PERSON_H
