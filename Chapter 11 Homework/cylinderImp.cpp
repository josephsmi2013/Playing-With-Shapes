//Cyclinder implementation

#include <iostream>
#include "cylinder.h"

using namespace std;

cylinder::cylinder()
{
	height = 0;
}

cylinder::cylinder(double newX, double newY, double newRadius, double newHeight)
	:circle(newX, newY, newRadius)
{
	height = newHeight;
}

void cylinder::print() const
{
	circle::print();
	cout << "hieght = " << height << endl;
}
void cylinder::setHeight(double newHeight)
{
	height = newHeight;
}

double cylinder::getHeight()
{
	return height;
}

double cylinder::volume()
{

	return 3.14159 * (getRadius() * getRadius()) * height;
}

double cylinder::area()
{
	return circle::area();
}