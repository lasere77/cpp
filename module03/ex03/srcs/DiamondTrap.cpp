#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap() : name("")
{
	std::cout << "DiamondTrap BASE was create" << std::endl << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name)
{
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	this->hit_point = FragTrap::hit_point;
	this->energy_point = ScavTrap::energy_point;
	this->attack_damage = FragTrap::attack_damage;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
	if (this != &copy)
	{
		this->attack_damage = copy.attack_damage;
		this->energy_point = copy.energy_point;
		this->hit_point = copy.hit_point;
		this->name = copy.name;
	}
	return (*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	*this = copy;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap { " << this->name << " } was destroy!" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "my name is: " << name << " and " << ClapTrap::name << std::endl;
}
