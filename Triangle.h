#include "Shape.h"
#include <iostream>


class Triangle : public Shape
{
public:
	Triangle(double& base, double& height);

	void setBase(const double& base);
	void setHeight(const double& height);

	const double& getBase() const;
	const double& getHeight() const;

	virtual double area() const;
	virtual void printType() const override;

private:
	double m_base, m_height;
};