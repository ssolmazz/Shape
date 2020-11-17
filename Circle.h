#include "Shape.h"

class Circle : public Shape
{
public:
	
	Circle(double& radius);

	void setRadius(const double& radius);
	const double getRadius() const;
	// const double getArea() const;

	double area();

private:
	double m_radius , m_area;

	


};

