#pragma once

#include <ostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed& operator=(const Fixed &copy);
		Fixed(const Fixed &copy);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int	fp_number;
		static const unsigned char	fractional_bits = 8;

};

std::ostream &operator<<(std::ostream &stream, const Fixed &fixed);
