#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::~Zombie()
{
	std::cout << name << ": was kill" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

const std::string	&Zombie::get_name() const { return (this->name); }
