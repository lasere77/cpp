#include "Fixed.hpp"

#include <iostream>
#include <cmath>

Fixed::Fixed()
{
	this->fp_number = 0;
}

Fixed::Fixed(const int nb)
{
	this->fp_number = nb << fractional_bits;
}

Fixed::Fixed(const float nb)
{
	this->fp_number = roundf(nb * (1 << fractional_bits));
}

Fixed& Fixed::operator=(const Fixed &copy)
{
	if (this != &copy)
		this->fp_number = copy.fp_number;
	return (*this);
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed::~Fixed()
{
}

Fixed	&Fixed::operator++()
{
	(*this).fp_number++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp;

	tmp = *this;
	this->fp_number++;
	return (tmp);
}

Fixed	Fixed::operator*(const Fixed &nb)
{
	return (Fixed(this->toFloat() * nb.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &nb)
{
	if (nb.toFloat() != 0)
	{
		std::cout << "try do divise by zero!" << std::endl;
		return (*this);
	}
	return (Fixed(this->toFloat() / nb.toFloat()));
}

Fixed	Fixed::operator+(const Fixed &copy)
{
	return (this->fp_number + copy.fp_number);
}

Fixed	Fixed::operator-(const Fixed &copy)
{
	return (this->fp_number - copy.fp_number);
}

bool	Fixed::operator<(const Fixed &copy)
{
	return (this->toFloat() < copy.toFloat());
}

bool	Fixed::operator>(const Fixed &copy)
{
	return (this->toFloat() > copy.toFloat());
}

bool	Fixed::operator>=(const Fixed &copy)
{
	return (this->toFloat() >= copy.toFloat());
}

bool	Fixed::operator<=(const Fixed &copy)
{
	return (this->toFloat() <= copy.toFloat());
}

bool	Fixed::operator==(const Fixed &copy)
{
	return (this->toFloat() == copy.toFloat());
}

bool	Fixed::operator!=(const Fixed &copy)
{
	return (this->toFloat() != copy.toFloat());
}

int	Fixed::getRawBits(void) const
{
	return (this->fp_number);
}

void	Fixed::setRawBits(int const raw)
{
	this->fp_number = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->fp_number / (1 << fractional_bits));
}

int	Fixed::toInt(void) const
{
	return (this->fp_number >> fractional_bits);
}

std::ostream	&operator<<(std::ostream &stream, Fixed const &fixed)
{
	stream << fixed.toFloat();
	return (stream);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if ((Fixed)a > (Fixed)b)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if ((Fixed)a < (Fixed)b)
		return (a);
	return (b);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}
