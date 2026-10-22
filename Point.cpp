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

int Point::getX()
{
	return Point::x;
}

int Point::getY()
{
	return Point::y;
}

void Point::setX(int x)
{
	Point::x = x;
}

void Point::setY(int y)
{
	Point::y = y;
}

void Point::swapXY()
{
	int temp{ Point::getX() };
	Point::setX(Point::getY());
	Point::setY(temp);
}

void Point::multiplyX(int factor)
{
	int product{ Point::getX() * factor };
	Point::setX(product);
}

void Point::multiplyY(int factor)
{
	int product{ Point::getY() * factor };
	Point::setY(product);
}

std::string Point::toString()
{
	return "[" + std::to_string(Point::getX()) + "," + std::to_string(Point::getY()) + "]";
}
