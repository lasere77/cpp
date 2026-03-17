#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie_heap = Zombie::newZombie("loic");
	delete  zombie_heap;
	Zombie::randomChump("ethode");
	Zombie::randomChump("titouan");
	return (0);
}