#pragma once

#include <string>
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		void	attack();
		void	setWeapon(Weapon &weapon);

	private:
		Weapon		*weapon;
		std::string	name;
};
