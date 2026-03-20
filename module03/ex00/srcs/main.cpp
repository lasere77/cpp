
#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	mark("mark");
	ClapTrap	emilie("emilie");

	mark.attack("emilie");
	mark.attack("emilie");
	mark.takeDamage(10);
	mark.beRepaired(10);
	return (0);
}
