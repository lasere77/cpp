
#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <ostream>

HumanB::HumanB(std::string name) : name(name)
{
	weapon = NULL;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack()
{
	if (!weapon)
		std::cout << name << " You have no enemy" << std::endl;
	else
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
