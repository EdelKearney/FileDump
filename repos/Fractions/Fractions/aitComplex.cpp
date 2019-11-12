#include <iostream>
#include "aitComplex.h"

int aitComplex::getA() const
{
	return a;
}

int aitComplex::getBi() const
{
	return bi;
}

void aitComplex::setA(int aParam)
{
	a = aParam;
}

void aitComplex::setBi(int bParam)
{
	bi = bParam;
}

//std::ostream& operator<<(std::ostream& os, const aitComplex& aC)
//{
//	char symbol;
//
//	if (aC.getBi >= 0)
//	{
//		os << aC.getA << " + " << aC.getBi << "i";
//	}
//	else
//	{
//		os << aC.getA << " " << aC.getBi << "i";
//	}
//
//	return os;
//}


