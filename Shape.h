#include<string>



using namespace std;
class Shape {
public:

	Shape();    // default constructor
	Shape(const std::string& name);    // constructor with argument

	void setName(const std::string& name);
	const std::string& getName() const;

	virtual double area() = 0;    // inerface method

private:
	std::string m_name;

};
#pragma once
