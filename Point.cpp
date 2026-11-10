#include "Point.h"

Point::Point()
	: x(0), y(0)
{

}

Point::Point(int x, int y)
	: x(x), y(y)
{
	// to be implmented... maybe
}

int Point::getX() const 
{
	return x;
}

int Point::getY() const
{
	return y;
}

void Point::setX(int x)
{
	this->x = x;
}

void Point::setY(int y)
{
	this->y = y;
}

void Point::setXY(int x, int y)
{
	setX(x);
	setY(y);
}

void Point::swapXY()
{
	int temp{ getX() };
	setX(getY());
	setY(temp);
}

void Point::multiplyX(int factor)
{
	setX(getX() * factor);
}

void Point::multiplyY(int factor)
{
	setY(getY() * factor);
}

std::string Point::toString() const
{
	return "[" + std::to_string(getX()) + "," + std::to_string(getY()) + "]";
}
