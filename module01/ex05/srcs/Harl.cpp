
#include "Harl.hpp"

#include <cstddef>
#include <iostream>
#include <string>

#define TALK "You are going to automate Harl. \
It won’t be difficult since he always says the same things"

void	Harl::complain(std::string level)
{
	const char *enum_str[PTR_FUNC_END] = { "INVALID", "DEBUG", "INFO", "WARNING", "ERROR" };
	/*Array designators are a C99 extension. THANKSSSSSS.... c is better...*/
	const ptr_func a[PTR_FUNC_END] = { &Harl::invalid_func, &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	size_t	index;

	index = 0;
	for (size_t i = 0; i < PTR_FUNC_END  && level.compare(enum_str[i]); i++)
		index++;

	(this->*a[(index < PTR_FUNC_END) * index])();
	std::cout << TALK << std::endl;
}

void	Harl::invalid_func()
{
	std::cout << "INVALID level: ";
}

void	Harl::debug()
{
	std::cout << "DEBUG level: ";
}

void	Harl::info()
{
	std::cout << "INFO level: ";
}

void	Harl::warning()
{
	std::cout << "WARNING level: ";
}

void	Harl::error()
{
	std::cout << "ERROR level: ";
}
