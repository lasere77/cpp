#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap() :  name(""), hit_point(10), energy_point(10), attack_damage(0)
{
	std::cout << "ClapTrap BASE was create" << std::endl << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hit_point = 10;
	this->energy_point = 10;
	this->attack_damage = 0;
	std::cout << "ClapTrap { " << this->name << " } was create!" << std::endl << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
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

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap { " << this->name << " } was destroy!" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->energy_point > 0 && this->hit_point > 0)
	{
		std::cout << "ClapTrap: " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
		energy_point--;
		std::cout << "ClapTrap: " << this->name << " have " << energy_point << " energy point" << std::endl << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_point > 0)
	{
		if (hit_point > amount)
			hit_point -= amount;
		else
			hit_point = 0;
	}
	std::cout << "ClapTrap: " << this->name << " take " << amount << " damage" << " he still has "<< this->hit_point << " hit_point" << std::endl << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_point > 0 && hit_point > 0)
	{
		this->hit_point += amount;
		energy_point--;
	}
	else
		std::cout << "ClapTrap: " << this->name << " cant do anything" << std::endl;
	std::cout << "ClapTrap: " << this->name << " have " << energy_point << " energy point" << " and " << this->hit_point << " hit point" << std::endl << std::endl;
}
