//#include <iostream>
//
//class Fraction
//{
//public:
//	int numerator;
//	int denominator;
//};
//
//
//Fraction operator*(const Fraction &lhs, const Fraction &rhs)
//{
//	Fraction result;
//	result.numerator = lhs.numerator * rhs.numerator;
//	result.denominator = lhs.denominator  * rhs.denominator;
//	return result;
//}
//
//std::ostream& operator<<(const std::ostream &os, const Fraction a)
//{
//	os << a.numerator << "/" << a.denominator;
//
//	return os;
//}
//
//
//
//int main()
//{
//	// 1/2
//	Fraction a;
//	a.numerator = 1;
//	a.denominator = 2;
//
//	Fraction b;
//	b.numerator = 1;
//	b.denominator = 4;
//
//	Fraction c = a * b;
//
//	std::cout << a;
//
//	return 1;
//}