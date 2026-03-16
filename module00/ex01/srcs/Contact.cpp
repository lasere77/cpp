#include "Contact.hpp"

#include <iostream>
#include <string>

void	Contact::display()
{
	std::cout << "first_name: " << first_name << std::endl;
	std::cout << "last_name: " << last_name << std::endl;
	std::cout << "nickname: " << nickname << std::endl;
	std::cout << "phone_nb: " << phone_nb << std::endl;
}


void	Contact::set_firt_name(std::string new_firt_name)
{
	first_name = new_firt_name;
}

void	Contact::set_last_name(std::string new_last_name)
{
	last_name = new_last_name;
}

void	Contact::set_nickname(std::string new_nickname)
{
	nickname = new_nickname;
}

void	Contact::set_phone_nb(std::string new_phone_nb)
{
	phone_nb = new_phone_nb;
}

void	Contact::set_darkest_secret(std::string new_darkest_secret)
{
	darkest_secret = new_darkest_secret;
}


std::string	Contact::get_firt_name() { return (first_name); }
std::string	Contact::get_last_name() { return (last_name); }
std::string	Contact::get_nickname() { return (nickname); }
std::string	Contact::get_phone_nb() { return (phone_nb); }
std::string	Contact::get_darkest_secret() { return (darkest_secret); }
