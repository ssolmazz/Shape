#include "Shape.h"
#include <iostream>


class Rectangle : public Shape
{
public:
	Rectangle(double& width, double& lenght);

	void setWidth(const double& width);
	void setLenght(const double& lenght);

	const double& getWidth() const;
	const double& getLenght() const;

	virtual double area() const;
	virtual void printType() const override;

private:
	double m_width, m_lenght;
};

