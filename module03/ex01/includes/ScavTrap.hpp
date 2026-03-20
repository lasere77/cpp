#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap	&operator=(const ScavTrap &copy);
		ScavTrap(const ScavTrap &copy);
		~ScavTrap();

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		
		void	guardGate();

	private:

};
