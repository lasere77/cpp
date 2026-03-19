#include "Fixed.hpp"

#include <iostream>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fp_number = 0;
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
