#include "Zombie.hpp"
#include <iostream>

#define NB_ZOMBIE 130

int	main(void)
{
	Zombie	*tab_zombie = Zombie::zombieHorde(NB_ZOMBIE, "axel");
	if (!tab_zombie)
		return (1);
	for (size_t	i = 0; i < NB_ZOMBIE; i++)
	{
		std::cout << "Zombie numero: {" << i << "} -> ";
		tab_zombie[i].announce();
	}
	delete[]	tab_zombie;
	return (0);
}
