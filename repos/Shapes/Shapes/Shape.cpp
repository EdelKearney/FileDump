// Include the shape header file.
#include "shape.h"
#include <iostream>

Shape::Shape(string colourParam)
{
	colour = colourParam;
}

string Shape::getColour() const
{
	return colour;
}

void Shape::printDetails() const
{
	cout << "The colour is: " << colour << endl;
}

double Shape::calculateArea() const
{
	return 0.0;
}





