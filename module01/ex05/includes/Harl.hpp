#pragma once

#include <string>

class Harl
{
	public:
		void	complain(std::string level);

	private:
		void	debug();
		void	info();
		void	warning();
		void	error();
		void	invalid_func();
};

typedef	void (Harl::*ptr_func)(void);

enum Harl_enum
{
	INVALID,
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	PTR_FUNC_END,
};
