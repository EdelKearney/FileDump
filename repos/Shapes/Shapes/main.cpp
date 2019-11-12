#include "triangle.h"
#include "square.h"

void main()
{
	int i = 5;

	Triangle t(2.0f, 4.0f, "red");

	int j = 10;

	Shape* shapeArray[3];

	shapeArray[0] = new Triangle(6.0, 7.0, "blue");
	shapeArray[1] = new Square(5.0, "orange");
	shapeArray[2] = new Triangle(1.0, 5.0, "orange");

	t.calculateArea();

	shapeArray[0]->calculateArea();


	for (int i = 0; i < 3; i++)
	{
		shapeArray[i]->printDetails();

		shapeArray[i]->calculateArea();
	}



	for (int i = 0; i < 3; i++)
	{
		delete shapeArray[i];
	}



}