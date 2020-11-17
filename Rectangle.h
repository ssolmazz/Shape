
#include "Shape.h"

class Rectangle : public Shape
{
public:

	Rectangle(double& width, double& lenght);

	void setWidth(const double& width);
	void setLenght(const double& lenght);

	const double& getWidth() const;
	const double& getLenght() const;

	double area();

private:
	double m_width, m_lenght;



};
