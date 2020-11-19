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

double Circle::area()
{
	 m_area = pow(m_radius, 2) * 3.14;
	 return m_area;
}

void Circle::printType()
{
	Shape::printType();
	std::cout << " I am also a circle :)" << std::endl;
}

//const double Circle::getArea() const
//{
//	 return m_area;
//}
