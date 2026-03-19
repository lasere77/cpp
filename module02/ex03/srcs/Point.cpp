#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(Fixed x, Fixed y)
{
	this->x = x;
	this->y = y;
}

void	Point::set_x(Fixed x)
{
	this->x = x;
}

void	Point::set_y(Fixed y)
{
	this->y = y;
}

Fixed	&Point::get_x(void) { return (this->x); }
Fixed	&Point::get_y(void) { return (this->y); }