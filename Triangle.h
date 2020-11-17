#include "Shape.h"


class Triangle : public Shape
{
public:
	Triangle(double& base, double& height);

	void setBase(const double& base);
	void setHeight(const double& height);

	const double& getBase() const;
	const double& getHeight() const;

	double area();

private:
	double m_base, m_height;



};

