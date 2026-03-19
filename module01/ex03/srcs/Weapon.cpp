
#include "Weapon.hpp"
#include <string>

Weapon::Weapon(std::string type)
{
	this->type = type;
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}

const std::string	&Weapon::getType() const { return (this->type); }
