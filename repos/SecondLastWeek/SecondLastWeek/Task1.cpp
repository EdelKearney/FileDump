//#include <iostream>
//
//
//template <typename T>
//std::ostream& operator<<(std::ostream& os, const T& t)
//{
//	os << t;
//
//	return os;
//}
//
//template <typename T>
//void displayValue(T x, char s)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		std::cout << s;
//	}
//
//	std::cout << x;
//
//	for (int i = 0; i < 10; i++)
//	{
//		std::cout << s;
//	}
//
//}
//
//
//
//int main()
//{
//	char c = 'p';
//	int i = 42;
//	double d = 39.25;
//	std::string s = "Sue";
//
//	char star = '*';
//
//	displayValue(c, star);
//	displayValue(i, star);
//	displayValue(d, star);
//	displayValue(s, star);
//
//	system("pause");
//
//	return 1;
//}