
#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

int main()
{
	double radius = 2;
	Circle circle(radius);

	circle.setName("circle1");
	std::cout << "The shape is " << circle.getName() << " and it's area is " << circle.area() << std::endl;
	circle.printType();
	cout << "-------------------------------------------------" << std::endl;

	double width = 5;
	double lenght = 10;
	Rectangle rec(width, lenght);

	rec.setName("rectangle");
	std::cout << "The shape is " << rec.getName() << " and it's area is " << rec.area() << std::endl;
	cout << "-------------------------------------------------" << std::endl;

	double base = 4;
	double height = 8;
	Triangle triangle(base, height);

	triangle.setName("triangle");
	std::cout << "The shape is " << triangle.getName() << " and it's area is " << triangle.area() << std::endl;


	// spørgsmål:
	// how to set area for every klass as private and get access via getArea fx
	// how to use base class constructor with argument in sub klass 
	// how to use to base constructors in subklass together
	// how can we make smart progtam at use area method  for shape klass 
	//     and it recognize self which shape it is and use thats area method in relevant class
	// const in getter and setter

	return 0;
}
