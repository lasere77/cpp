#pragma once

#include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(Fixed x, Fixed y);
		Point &operator=(const Point &copy);
		Point(const Point &copy);
		~Point();
		
		const Fixed	&get_x() const;
		const Fixed	&get_y() const;

	private:
		Fixed const	x;
		Fixed const	y;
};
