#pragma once

#include <string>

class Zombie
{
	public:
		~Zombie(void);

		static Zombie*	newZombie(std::string name);
		static void		randomChump(std::string name);

		const std::string	&get_name() const;

	private:
		void		announce(void);
		std::string	name;
};
