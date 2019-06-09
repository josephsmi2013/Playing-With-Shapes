//Circle implementation

#include <iostream>
#include "circle.h"

using namespace std;

circle::circle() 
{
	xCoordinate = 0;
	yCoordinate = 0;
	radius = 0;
}

circle::circle(double newX, double newY, double newRadius) 
{
	xCoordinate = newX;
	yCoordinate = newY;
	radius = newRadius;
}

void circle::print() const
{
	cout << "xCoordinate = " << xCoordinate << endl;
	cout << "yCoordinate = " << yCoordinate << endl;
	cout << "radius = " << radius << endl;
}

void circle::setRadius(double newRadius)
{
	radius = newRadius;
}

void circle::setCenter(double newX, double newY) 
{
	xCoordinate = newX;
	yCoordinate = newY;
}

void circle::getCenter(double& newX, double& newY)
{
	xCoordinate = newX;
	yCoordinate = newY;
}

double circle::getRadius()
{
	return radius;
}
double circle::area()
{
	return 3.14159 * (radius * radius);
}
