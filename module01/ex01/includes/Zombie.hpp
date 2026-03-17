#pragma once

#include <string>

class Zombie
{
	public:
		~Zombie(void);

		static Zombie	*zombieHorde(int N, std::string name);
		void			announce(void);

		std::string		get_name();


	private:
		std::string	name;
};
