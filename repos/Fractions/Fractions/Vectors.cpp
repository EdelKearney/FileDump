//#include <iostream>
//
//class Vector
//{
//public:
//	int x;
//	int y;
//	int z;
//};
//
////add the vectors;
//Vector operator+(const Vector &a, const Vector &b)
//{
//	Vector result;
//	result.x = a.x + b.x;
//	result.y = a.y + b.y;
//	result.z = a.z + b.z;
//
//	return result;
//}
//
////subtract the vectors;
//Vector operator-(const Vector &a, const Vector &b)
//{
//	Vector result;
//	result.x = a.x - b.x;
//	result.y = a.y - b.y;
//	result.z = a.z - b.z;
//
//	return result;
//}
//
////multiply the vectors;
//Vector operator*(const Vector &a, const Vector &b)
//{
//	Vector result;
//	result.x = a.x * b.x;
//	result.y = a.y * b.y;
//	result.z = a.z * b.z;
//
//	return result;
//}
//
////divide the vectors;
//Vector operator/(const Vector &a, const Vector &b)
//{
//	Vector result;
//	result.x = a.x / b.x;
//	result.y = a.y / b.y;
//	result.z = a.z / b.z;
//
//	return result;
//}
//
//std::ostream& operator<<(std::ostream& os, const Vector& v)
//{
//	os << "X: " << v.x << ", Y: " << v.y << ", Z: " << v.z << "." << std::endl;
//	return os;
//}
//
//int main()
//{
//	Vector a;
//	a.x = 10;
//	a.y = 4;
//	a.z = 42;
//
//	Vector b;
//	b.x = 5;
//	b.y = 2;
//	b.z = 21;
//
//	Vector c = a + b;
//	Vector d = a - b;
//	Vector e = a * b;
//	Vector f = a / b;
//
//	std::cout << a;
//	std::cout << b << std::endl;
//	
//	std::cout << c;
//	std::cout << d;
//	std::cout << e;
//	std::cout << f;
//
//	system("pause");
//}