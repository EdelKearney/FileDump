#include <iostream>

void main()
{
	// The size of the array
	int arraySize = 3;
	// Array to hold integers
	int *theArray = new int[arraySize];
	// Number of elements in the array
	int numberElements = 0;

	int input;
	std::cout << "Enter a positive number to add to the array (negative number to quit): ";
	std::cin >> input;

	while (input >= 0)
	{
		// If the array has space
		//   Add number to array
		// Else
		//   Break from the loop
		if (numberElements < arraySize)
		{
			theArray[numberElements++] = input;
		}
		else
		{
			int newArraySize = arraySize + 3;
			int* newArray = new int[newArraySize];
			for (int i = 0; i < arraySize; i++)
			{
				newArray[i] = theArray[i];
			}

			delete theArray;
			theArray = NULL;

			arraySize = newArraySize;
			theArray = newArray;
		}

		std::cout << "Enter a positive number to add to the array (negative number to quit): ";
		std::cin >> input;
	}
}