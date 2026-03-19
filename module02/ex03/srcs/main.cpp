#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	Point	a(Fixed(1), Fixed(1));
	Point	b(Fixed(5), Fixed(5));
	Point	c(Fixed(2), Fixed(3));

	if (bsp(a, b, c, Point(Fixed(2.29f), Fixed(2.75f))))
		std::cout << "the Point is inside the triangle" << std::endl;
	else
		std::cout << "the Point is not inside the triangle" << std::endl;
	return (0);
}
