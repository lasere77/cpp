#pragma once

#include <string>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap &operator=(const ClapTrap &copy);
		ClapTrap(const ClapTrap &copy);
		virtual ~ClapTrap();

		virtual void	attack(const std::string &target);
		virtual void	takeDamage(unsigned int amount);
		virtual void	beRepaired(unsigned int amount);

	protected:
		std::string		name;
		unsigned int	hit_point;
		unsigned int	energy_point;
		unsigned int	attack_damage;

	private:

};
