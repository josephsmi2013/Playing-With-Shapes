#include <iostream>
#include <iomanip>

#include "cylinder.h"

using namespace std;



int main() {

	cylinder newCylinder;
	int x;
	int y;
	int radius;
	int height;

	cout << "Enter the center point (x, y), the radius and, the height" << endl;
	cin >> x >> y >> radius >> height;

	newCylinder.setCenter(x, y);
	newCylinder.setRadius(radius);
	newCylinder.setHeight(height);

	newCylinder.print();
	cout << "The cylinder has a volume of " << newCylinder.volume() << endl;

	system("pause");

	return 0;

}


