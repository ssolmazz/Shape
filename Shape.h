#pragma once
#include<string>


class Shape
{
public:
	Shape();    // default constructor
	Shape(const std::string& name);    // constructor with argument

	void setName(const std::string& name);
	const std::string& getName() const;

	virtual double area() const = 0;    // inerface method

	virtual void printType() const;     // Print type of shape
	
private:
	std::string m_name;
};