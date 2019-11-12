#include "square.h"
#include <iostream>

Square::Square(double sideLengthParam, string colourParam)
	: Shape(colourParam)
{
	sideLength = sideLengthParam;
}


double Square::getSideLength() const
{
	return sideLength;
}


void Square::setSideLength(double sideLengthParam)
{
	sideLength = sideLengthParam;
}


void Square::printDetails() const
{
	// Print the colour of the shape
	Shape::printDetails();

	// Print the sideLength of the square
	cout << "The sideLength is: " << sideLength << endl;
}

double Square::calculateArea() const
{
	return sideLength * sideLength;
}

