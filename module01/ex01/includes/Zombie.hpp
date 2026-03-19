#pragma once

#include <string>

class Zombie
{
	public:
		~Zombie(void);

		static Zombie	*zombieHorde(int N, std::string name);
		void			announce(void);

		const std::string	&get_name() const;


	private:
		std::string	name;
};
