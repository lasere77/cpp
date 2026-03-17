#include "Zombie.hpp"
#include <cstddef>
#include <new>
#include <string>

Zombie	*Zombie::zombieHorde(int N, std::string name)
{
	Zombie	*tab_zombie;

	if (N <= 0)
		return (NULL);
	tab_zombie = new (std::nothrow) Zombie[N];
	if (!tab_zombie)
		return (NULL);
	for (int i = 0; i < N; i++)
		tab_zombie[i].name = name;
	return (tab_zombie);
}
