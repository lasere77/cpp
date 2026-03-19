#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : x(0), y(0) 
{
}

Point::~Point()
{
}

Point& Point::operator=(const Point &copy)
{
	(void)copy;
	return (*this);
}

Point::Point(const Point &copy)
{
	*this = copy;
}

Point::Point(const Fixed x, const Fixed y) : x(x), y(y)
{
}

const Fixed	&Point::get_x(void) const { return (this->x); }
const Fixed	&Point::get_y(void) const { return (this->y); }