#include "Zombie.hpp"

void	Zombie::randomChump(std::string name)
{
	Zombie	Zombie;

	Zombie.name = name;
	Zombie.announce();
}
