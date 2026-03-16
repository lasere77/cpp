#include "PhoneBook.hpp"
#include "Contact.hpp"

#include <cstddef>
#include <iostream>
#include <iomanip>
#include <ostream>
#include <string>
#include <sys/types.h>

PhoneBook::PhoneBook()
{
	index = 0;
	register_contact = 0;
}

void	PhoneBook::next_contact()
{
	register_contact += (register_contact < MAX_CONTACT);
	index++;
}

static inline void	display_in_array(size_t index)
{
	std::cout << std::setw(DISPLAY_ARRAY_LEN) << index << "|";
}

void	display_in_array(std::string str)
{
	for (size_t i = 0; str[i]; i++)
		if (str[i] == '\t')
			str[i] = ' ';
	if (str.length() > DISPLAY_ARRAY_LEN)
		std::cout << std::setw(DISPLAY_ARRAY_LEN) << str.substr(0, DISPLAY_ARRAY_LEN - 1) + "." << "|";
	else
		std::cout << std::setw(DISPLAY_ARRAY_LEN) << str << "|";
}

void	PhoneBook::display()
{
	std::cout << "|";
	display_in_array("Index");
	display_in_array("First name");
	display_in_array("Last name");
	display_in_array("Nickname");
	std::cout << std::endl;
	for (int i = 0; i <= register_contact - 1; i++)
	{
		std::cout << "|";
		display_in_array(i);
		display_in_array(contact[i].get_firt_name());
		display_in_array(contact[i].get_last_name());
		display_in_array(contact[i].get_nickname());
		std::cout << std::endl;
	}
}

bool	PhoneBook::is_valid_index(int index)
{
	return (0 <= index && index <= MAX_CONTACT - 1 && index < register_contact);
}

Contact			PhoneBook::get_contact(int index) { return (contact[index]); }
unsigned char	PhoneBook::get_register_contact() { return (register_contact); }
Contact			&PhoneBook::get_current_contact() { return (contact[index % MAX_CONTACT]); }
