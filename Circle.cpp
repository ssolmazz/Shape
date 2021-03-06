#include "Circle.h"


Circle::Circle(double& radius) : Shape()
{
	m_radius = radius;
}

void Circle::setRadius(const double& radius)
{
	m_radius = radius;
}

const double Circle::getRadius() const
{
	return m_radius;
}

double Circle::area() const
{
	 return pow(m_radius, 2) * 3.14;
}

void Circle::printType() const
{
	Shape::printType();
	std::cout << " I am also a circle :)" << std::endl;
}

//const double Circle::getArea() const
//{
//	 return m_area;
//}
