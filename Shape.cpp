#include "Shape.h"
#include < iostream>
#include <string>


Shape::Shape()
{
	std::cout << " Object is  created." << std::endl;
}

Shape::Shape(const std::string& name)
{
	m_name = name;
}

void Shape::setName(const std::string& name)
{
	m_name = name;
}

const std::string& Shape::getName() const
{
	return m_name;
}

 void Shape::printType() const
{
	std::cout << " I am a shape." << std::endl;
}


