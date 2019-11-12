#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square : public Shape
{
public:
	//	Square constructor
	Square(double sideLengthParam, string colourParam);

	//  Get the side length of the square
	double getSideLength() const;

	//  Set the side length of the square
	void setSideLength(double sideLengthParam);

	// Prints the details of the shape
	void printDetails() const;

	// Calculates and returns the area of the shape
	double calculateArea() const;

private:

	double sideLength;
};

#endif // SQUARE_H