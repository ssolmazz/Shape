#include "Triangle.h"


Triangle::Triangle(double& base, double& height) : Shape()
{
	m_base = base;
	m_height = height;
}

void Triangle::setBase(const double& base)
{
	m_base = base;
}

void Triangle::setHeight(const double& height)
{
	m_height = height;
}

const double& Triangle::getBase() const
{
	return m_base;
}

const double& Triangle::getHeight() const
{
	return m_height;
}

double Triangle::area() const
{
	return 0.5 * m_base * m_height;
}

void Triangle::printType() const
{
	Shape::printType();
	std::cout << " I am also a triangle :)" << std::endl;
}