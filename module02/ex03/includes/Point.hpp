#pragma once

#include "Fixed.hpp"

class Point
{
	public:
		Point(Fixed x, Fixed y);
		
		Fixed	&get_x();
		Fixed	&get_y();

		void	set_x(Fixed	x);
		void	set_y(Fixed	y);

	private:
		Fixed	x;
		Fixed	y;
};
