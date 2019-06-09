#ifndef cylinder_H
#define cylinder_H

#include "circle.h"

class cylinder : public circle
{
public:
	void print() const;
	void setHeight(double);
	double getHeight();
	double volume();
	double area();

	cylinder();
	cylinder(double, double, double, double);

private:
	double height;
};

#endif