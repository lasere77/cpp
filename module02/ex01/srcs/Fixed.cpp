#include "Fixed.hpp"

#include <iostream>
#include <cmath>
#include <ostream>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fp_number = 0;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->fp_number = nb << fractional_bits;
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called" << std::endl;
	this->fp_number = roundf(nb * (1 << fractional_bits));
}

Fixed& Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->fp_number = copy.fp_number;
	return (*this);
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fp_number);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
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
