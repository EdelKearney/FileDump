#include <iostream>

int countingFun()
{
	static int counter = 0;
	counter++;
	return counter;
}

void main()
{
	for (int i = 0; i < 10; i++)
	{
		int value = countingFun();
		std::cout << value << std::endl;
	}

	

	system("pause");
}