#pragma once

#include <string>
#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon);
		void	attack();

	private:
		Weapon		&weapon;
		std::string	name;
};
