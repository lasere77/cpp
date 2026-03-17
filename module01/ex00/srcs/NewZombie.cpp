#include "Zombie.hpp"
#include <cstddef>

Zombie	*Zombie::newZombie(std::string name)
{
	Zombie	*result;

	result = new (std::nothrow) Zombie;
	if (!result)
		return (NULL);
	result->name = name;
	result->announce();
	return (result);
}
