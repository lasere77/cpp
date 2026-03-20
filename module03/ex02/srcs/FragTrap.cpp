#include "FragTrap.hpp"

#include <iostream>
#include <string>

FragTrap::FragTrap()
{
	std::cout << "FragTrap BASE was create" << std::endl << std::endl;
}

FragTrap::FragTrap(const std::string name)
{
	this->name = name;
	this->hit_point = 100;
	this->energy_point = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap { " << this->name << " } was create!" << std::endl << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
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

FragTrap::FragTrap(const FragTrap &copy)
{
	*this = copy;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap { " << this->name << " } was destroy!" << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	if (this->energy_point > 0 && this->hit_point > 0)
	{
		std::cout << "FragTrap: " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
		energy_point--;
		std::cout << "FragTrap: " << this->name << " have " << energy_point << " energy point" << std::endl << std::endl;
	}
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (hit_point > 0)
	{
		if (hit_point > amount)
			hit_point -= amount;
		else
			hit_point = 0;
	}
	std::cout << "FragTrap: " << this->name << " take " << amount << " damage" << " he still has "<< this->hit_point << " hit_point" << std::endl << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (this->energy_point > 0 && hit_point > 0)
	{
		this->hit_point += amount;
		energy_point--;
	}
	else
		std::cout << "FragTrap: " << this->name << " cant do anything" << std::endl;
	std::cout << "FragTrap: " << this->name << " have " << energy_point << " energy point" << " and " << this->hit_point << " hit point" << std::endl << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::string	tmp;

	std::cout << "highFives 😁👋!!!";
	std::getline(std::cin, tmp);
}
