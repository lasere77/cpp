#pragma once

#include <string>

class Weapon
{
	public:
		Weapon(std::string type);

		const std::string	&getType() const;
		void		setType(std::string new_str);
	
	private:
		std::string type;
};
