#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap();
		DiamondTrap(const std::string name);
		DiamondTrap &operator=(const DiamondTrap &copy);
		DiamondTrap(const DiamondTrap &copy);
		~DiamondTrap();
		using ScavTrap::attack;

		void	whoAmI();

	private:
		std::string	name;
};
