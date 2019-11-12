#ifndef AITCOMPLEX_H
#define AITCOMPLEX_H

#include <iostream>

class aitComplex
{
public:
	float getA() const;
	float getBi() const;
	void setA(float aParam);
	void setBi(float bParam);
	aitComplex operator+(const aitComplex &second);
	aitComplex operator-(const aitComplex &second);
	aitComplex operator*(const float number);
	aitComplex operator*(const aitComplex &second);
	aitComplex operator/(const float number);
	aitComplex operator/(const aitComplex &second);

private:
	float a; // solo number
	float bi; //number with i
};

#endif // !AITCOMPLEX_H
