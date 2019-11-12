#include <iostream>
#include "aitComplex.h"

float aitComplex::getA() const
{
	return a;
}

float aitComplex::getBi() const
{
	return bi;
}

void aitComplex::setA(float aParam)
{
	a = aParam;
}

void aitComplex::setBi(float bParam)
{
	bi = bParam;
}

aitComplex aitComplex::operator+(const aitComplex &second)
{
	aitComplex result;

	result.setA(a + second.getA());
	result.setBi(bi + second.getBi());

	return result;
}

aitComplex aitComplex::operator-(const aitComplex &second)
{
	aitComplex result;

	result.a = a - second.getA();
	result.bi = bi - second.getBi();

	return result;
}

aitComplex aitComplex::operator*(const float number)
{
	aitComplex result;

	result.a = a * number;
	result.bi = bi *number;

	return result;
}

aitComplex aitComplex::operator*(const aitComplex &second)
{
	aitComplex result;

	result.a = a * second.getA();
	result.bi = bi * second.getBi();

	return result;
}

aitComplex aitComplex::operator/(const float number)
{
	aitComplex result;

	result.a = a /number;
	result.bi = bi / number;

	return result;
}

aitComplex aitComplex::operator/(const aitComplex &second) 
{
	aitComplex result;

	result.a = a / second.getA();
	result.bi = bi / second.getBi();

	return result;
}