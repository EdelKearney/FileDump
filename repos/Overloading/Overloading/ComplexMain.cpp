//#include <iostream>
//#include "aitComplex.h"
//
//std::ostream& operator<<(std::ostream& os, const aitComplex& aC)
//{
//	char symbol;
//
//	if (aC.getBi() >= 0)
//	{
//		symbol = '+';
//	}
//	else
//	{
//		symbol = ' ';
//	}
//	os << aC.getA() << symbol << aC.getBi() << "i";
//
//	return os;
//}
//
//std::ostream& operator>>(std::ostream& os, const aitComplex& aC)
//{
//	
//
//	return os;
//}
//
//int main()
//{
//	aitComplex first;
//	first.setA(4);
//	first.setBi(3);
//
//	aitComplex second;
//	second.setA(5);
//	second.setBi(2);
//
//	std::cout << first << std::endl;
//	std::cout << second << std::endl;
//
//	aitComplex third;
//	aitComplex fourth;
//	aitComplex fifth;
//	aitComplex sixth;
//	aitComplex seventh;
//	aitComplex eigth;
//	
//	third = first + second;
//	fourth = first - second;
//	fifth = first * 5;
//	sixth = first * second;
//	seventh = first / 2;
//	eigth = first / second;
//
//	std::cout << "Third: " << third << std::endl;
//	std::cout << "Fourth: " << fourth << std::endl;
//	std::cout << "Fifth: " << fifth << std::endl;
//	std::cout << "Sixth: " << sixth << std::endl;
//	std::cout << "Seventh: " << seventh << std::endl;
//	std::cout << "Eigth: " << eigth << std::endl;
//
//
//	system("pause");
//}