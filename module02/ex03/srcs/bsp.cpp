#include "Point.hpp"

/* https://hackmd.io/@ChloeIsCoding/r19Mge-fll */
// (Bx - Ax)(Py - Ay) - (By - Ay)(Px - Ax)
bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	const float	a_x = a.get_x().toFloat();
	const float	a_y = a.get_y().toFloat();
	const float	b_x = b.get_x().toFloat();
	const float	b_y = b.get_y().toFloat();
	const float	c_x = c.get_x().toFloat();
	const float	c_y = c.get_y().toFloat();
	const float	p_x = point.get_x().toFloat();
	const float	p_y = point.get_y().toFloat();

    Fixed	d1 = (b_x - a_x) * (p_y - a_y) - (b_y - a_y) * (p_x - a_x);
    Fixed	d2 = (c_x - b_x) * (p_y - b_y) - (c_y - b_y) * (p_x - b_x);
    Fixed	d3 = (a_x - c_x) * (p_y - c_y) - (a_y - c_y) * (p_x - c_x);

    bool	has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    bool	has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);
    bool	has_zero = (d1 == 0) || (d2 == 0) || (d3 == 0);

	if (has_zero)
        return (false);
    return (!(has_neg && has_pos));
}