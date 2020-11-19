#include "Rectangle.h"


Rectangle::Rectangle(double& width, double& lenght) : Shape()
{
	m_width = width;
	m_lenght = lenght;
}

void Rectangle::setWidth(const double& width)
{
	m_width = width;
}

void Rectangle::setLenght(const double& lenght)
{
	m_lenght = lenght;
}

const double& Rectangle::getWidth() const
{
	return m_width;
}

const double& Rectangle::getLenght() const
{
	return m_lenght;
}

double Rectangle::area()
{
	return m_width * m_lenght;
}

void Rectangle::printType() 
{
	Shape::printType();
	std::cout << " I am also a rectangle :)" << std::endl;
}