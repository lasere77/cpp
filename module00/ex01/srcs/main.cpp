#include "contact.hpp"
#include "phoneBook.hpp"

#include <cstdlib>
#include <iostream>
#include <ostream>
#include <string>

std::string	prompt(std::string str)
{
	std::string input_line;

	if (std::cin)
	{
		do
		{
			std::cout << str;
			getline(std::cin, input_line);
		}
		while (input_line.empty() && std::cin);
	}
	return (input_line);
}

static bool	only_have_digit(std::string str)
{
	for (std::string::iterator it = str.begin(); it != str.end(); it++)
	{
		if (!('0' <= *it && *it <= '9'))
			return (false);
	}
	return (true);
}

void	search(PhoneBook *phoneBook)
{
	int	index;
	std::string index_str;

	phoneBook->display();
	do
	{
		index_str = prompt("Please enter a valid contact index: ");
		index = std::atoi(index_str.c_str());
	}
	while (!only_have_digit(index_str) || (!phoneBook->is_valid_index(index) && std::cin));
	if (std::cin)
		phoneBook->get_contact(index).display();
}

int main(void)
{
	std::string input_line;
	PhoneBook	phoneBook;

	while(std::cin)
	{
		input_line = prompt("> ");
		if (input_line == "ADD")
		{
			phoneBook.get_current_contact().set_firt_name(prompt("Please enter your first name: "));
			phoneBook.get_current_contact().set_last_name(prompt("Please enter your last name: "));
			phoneBook.get_current_contact().set_nickname(prompt("Please enter your nickname: "));
			phoneBook.get_current_contact().set_phone_nb(prompt("Please enter your phone number: "));
			phoneBook.get_current_contact().set_darkest_secret(prompt("Please enter your darkest secret: "));
			if (std::cin)
				std::cout << "Contact added successfully." << std::endl;
			phoneBook.next_contact();
		}
		else if (input_line == "SEARCH")
		{
			if (phoneBook.get_register_contact())
				search(&phoneBook);
			else
				std::cout << "No one has been registered." << std::endl;
		}
		else if (input_line == "HELP")
		{
			std::cout << "ADD: save a new contac." << std::endl;
			std::cout << "SEARCH: display a specific contact." << std::endl;
			std::cout << "EXIT: quit." << std::endl;
		}
		else if (input_line == "EXIT")
			break ;
		else
		 	std::cout << "try HELP command" << std::endl;
    };
    return 0;
}
