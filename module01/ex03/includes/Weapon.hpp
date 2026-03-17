#pragma once

#include <string>

class Weapon
{
	public:
		Weapon(std::string type);

		std::string	&getType();
		void		setType(std::string new_str);
	
	private:
		std::string type;
};
