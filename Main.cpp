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
	std::cout << "-------------------------------------------------" << std::endl;

	double width = 5;
	double lenght = 10;
	Rectangle rec(width, lenght);

	rec.setName("rectangle");
	std::cout << "The shape is " << rec.getName() << " and it's area is " << rec.area() << std::endl;
	rec.printType();
	std::cout << "-------------------------------------------------" << std::endl;

	double base = 4;
	double height = 8;
	Triangle triangle(base, height);

	triangle.setName("triangle");
	std::cout << "The shape is " << triangle.getName() << " and it's area is " << triangle.area() << std::endl;
	triangle.printType();
	std::cout << "-------------------------------------------------" << std::endl;

	// spørgsmål:
	// how to set area for every klass as private and get access via getArea fx
	// how to use base class constructor with argument in sub klass 
	// how to use to base constructors in subklass together
	// const in getter and setter

	// how can we make smart progtam at use area method  for shape klass 
	//     and it recognize self which shape it is and use thats area method in relevant class
	/**		Answer: you can make a shared pointer to an abstraction (but you can not instantiate an abstraction!)
			In this shared pointer you can store a shared pointer to any child class.
			Then you when you call the method that is defined in shape, it will recognize which child class it is pointing to and will call the right method in the child class.
			Isn't it nice? You can call the functions that are defined in the children and run the very same code for all of them.
			This is useful for assigning types in runtime and not having to replicate code for each childclass. (e.g. user inputs c,r or t for circle, rectangle or triangle, you make the shared pointer
			and run the same code regardless which one was specified by the user.
	*/
	std::shared_ptr<Shape> s = nullptr;	// Make shared pointer to Shape
	s = std::make_shared <Triangle>(base, height);	// Assign a shared pointer to a triangle object
	s->setName("Shape");
	std::cout << "The shape is " << s->getName() << " and it's area is " << s->area() << std::endl; // Call function, it will run the correct method in the child class
	s->printType(); // Call function, it will run the correct method in the child class

	s = std::make_shared <Circle>(radius);	// You can change the same objecty to be a circle
	s->setName("Shape");
	std::cout << "The shape is " << s->getName() << " and it's area is " << s->area() << std::endl; // Call function, it will run the correct method in the child class
	s->printType(); // Call function, it will run the correct method in the child class

	return 0;
}
