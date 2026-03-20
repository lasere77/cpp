
#include "DiamondTrap.hpp"

int	main(void)
{
	// ClapTrap	mark("mark");
	// ClapTrap	emilie("emilie");
	// ScavTrap	brosse("brosse a dent");
	// FragTrap	sable("sable");
	DiamondTrap	diamond("diamo");

	// mark.attack("emilie");
	// mark.attack("emilie");
	// mark.takeDamage(10);
	// mark.beRepaired(10);

	// brosse.attack("mark");
	// brosse.guardGate();

	// sable.attack("brosse");
	// sable.highFivesGuys();
	diamond.whoAmI();
	diamond.highFivesGuys();
	diamond.attack("test");
	return (0);
}
