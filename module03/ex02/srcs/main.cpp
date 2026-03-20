
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	mark("mark");
	ClapTrap	emilie("emilie");
	ScavTrap	brosse("brosse a dent");
	FragTrap	sable("sable");

	mark.attack("emilie");
	mark.attack("emilie");
	mark.takeDamage(10);
	mark.beRepaired(10);

	brosse.attack("mark");
	brosse.guardGate();

	sable.attack("brosse");
	sable.highFivesGuys();
	return (0);
}
