#pragma once

#include <ostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed &operator=(const Fixed &copy);
		Fixed operator*(const Fixed &copy);
		Fixed operator/(const Fixed &nb);
		Fixed operator+(const Fixed &copy);
		Fixed operator-(const Fixed &copy);
		bool  operator<(const Fixed &copy);
		bool  operator>(const Fixed &copy);
		bool  operator>=(const Fixed &copy);
		bool  operator<=(const Fixed &copy);
		bool  operator==(const Fixed &copy);
		bool  operator!=(const Fixed &copy);
		Fixed &operator++(void);
		Fixed operator++(int);
		Fixed(const Fixed &copy);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		static const Fixed	&max(const Fixed &a, const Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static Fixed		&min(Fixed &a, Fixed &b);

	private:
		int	fp_number;
		static const unsigned char	fractional_bits = 8;

};

std::ostream &operator<<(std::ostream &stream, const Fixed &fixed);
