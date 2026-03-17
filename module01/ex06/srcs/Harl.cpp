
#include "Harl.hpp"

#include <cstddef>
#include <iostream>
#include <ostream>
#include <string>

#define INVALID_MSG "'every one is gay' kurt"
#define DEBUG_MSG "I love having extra bacon for my \
7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
#define INFO_MSG "I cannot believe adding extra bacon costs more money. \
You didn't put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
#define WARN_MSG "think I deserve to have some extra bacon for free. I’ve been coming for\
years, whereas you started working here just last month."
#define ERROR_MSG "This is unacceptable! I want to speak to the manager now."

void	Harl::complain(std::string level)
{
	const char	*enum_str[PTR_FUNC_END] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	int			index;

	index = 0;
	for (size_t i = 0; i < PTR_FUNC_END && level.compare(enum_str[i]); i++)
		index++;

	switch (index)
	{
		case DEBUG:
			debug();
		case INFO:
			info();
		case WARNING:
			warning();
		case ERROR:
			error();
			break ;
		default:
			invalid_func();
	}
}

void	Harl::invalid_func()
{
	std::cout << "[ INVALID ]" << std::endl;
	std::cout << INVALID_MSG << std::endl << std::endl;
}

void	Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << DEBUG_MSG << std::endl << std::endl;
}

void	Harl::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << INFO_MSG << std::endl << std::endl;
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << WARN_MSG << std::endl << std::endl;
}

void	Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << ERROR_MSG << std::endl << std::endl;
}
