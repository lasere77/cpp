#pragma once

#include "Contact.hpp"
#include <string>

class Contact
{
	public:
		void		display();

		std::string	get_firt_name();
		std::string	get_last_name();
		std::string	get_nickname();
		std::string	get_phone_nb();
		std::string	get_darkest_secret();

		void		set_firt_name(std::string new_firt_name);
		void		set_last_name(std::string new_last_name);
		void		set_nickname(std::string new_nickname);
		void		set_phone_nb(std::string new_phone_nb);
		void		set_darkest_secret(std::string new_darkest_secret);

	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_nb;
		std::string	darkest_secret;
};