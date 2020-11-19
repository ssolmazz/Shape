#include "Shape.h"
#include <iostream>


class Circle : public Shape
{
public:
	Circle(double& radius);

	void setRadius(const double& radius);
	const double getRadius() const;
	// const double getArea() const;

	virtual double area() const;
	virtual void printType() const override;

private:
	double m_radius;
};