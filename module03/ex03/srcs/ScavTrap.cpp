#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap BASE was create" << std::endl << std::endl;
}

ScavTrap::ScavTrap(const std::string name)
{
	this->name = name;
	this->hit_point = 100;
	this->energy_point = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap { " << this->name << " } was create!" << std::endl << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
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

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	*this = copy;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap { " << this->name << " } was destroy!" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->energy_point > 0 && this->hit_point > 0)
	{
		std::cout << "ScavTrap: " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
		energy_point--;
		std::cout << "ScavTrap: " << this->name << " have " << energy_point << " energy point" << std::endl << std::endl;
	}
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (hit_point > 0)
	{
		if (hit_point > amount)
			hit_point -= amount;
		else
			hit_point = 0;
	}
	std::cout << "ScavTrap: " << this->name << " take " << amount << " damage" << " he still has "<< this->hit_point << " hit_point" << std::endl << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->energy_point > 0 && hit_point > 0)
	{
		this->hit_point += amount;
		energy_point--;
	}
	else
		std::cout << "ScavTrap: " << this->name << " cant do anything" << std::endl;
	std::cout << "ScavTrap: " << this->name << " have " << energy_point << " energy point" << " and " << this->hit_point << " hit point" << std::endl << std::endl;
}


void	ScavTrap::guardGate()
{
	std::cout << "the ScavTrap: " << this->name << " is now in Gate keeper mode" << std::endl << std::endl;
}
