#ifndef SHAPE_H
#define SHAPE_H

#include <string>

using namespace std;

class Shape
{
public:
	Shape() {};

	//	Shape constuctor
	Shape(string colourParam);

	//  Get the colour of the shape
	string getColour() const;

	// Prints the details of the shape
	void printDetails() const;

	// Calculates and returns the area of the shape
	double calculateArea() const;

private:

	string colour;
};

#endif // SHAPE_H

