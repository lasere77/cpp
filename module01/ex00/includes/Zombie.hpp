#pragma once

#include <string>

class Zombie
{
	public:
		~Zombie(void);

		static Zombie*	newZombie(std::string name);
		static void		randomChump(std::string name);

		std::string		get_name();

	private:
		void		announce(void);
		std::string	name;
};
