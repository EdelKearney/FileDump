#include <iostream>
#include "aitComplex.h"

std::ostream& operator<<(std::ostream& os, const aitComplex& aC)
{
	char symbol;

	if (aC.getBi() >= 0)
	{
		symbol = '+';
	}
	else
	{
		symbol = ' ';
	}
	os << aC.getA() << symbol << aC.getBi() << "i";

	return os;
}

int main()
{
	aitComplex first;
	first.setA(4);
	first.setBi(3);

	aitComplex second;
	second.setA(5);
	second.setBi(2);

	std::cout << first << std::endl;
	std::cout << second << std::endl;
}