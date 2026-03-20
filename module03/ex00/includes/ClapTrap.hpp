#pragma once

#include <string>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap &operator=(const ClapTrap &copy);
		ClapTrap(const ClapTrap &copy);
		~ClapTrap();

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private:
		std::string		name;
		unsigned int	hit_point;
		unsigned int	energy_point;
		unsigned int	attack_damage;
};
