
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	mark("mark");
	ClapTrap	emilie("emilie");
	ScavTrap	brosse("brosse a dent");


	mark.attack("emilie");
	mark.attack("emilie");
	mark.takeDamage(10);
	mark.beRepaired(10);

	brosse.attack("mark");
	brosse.guardGate();
	return (0);
}
