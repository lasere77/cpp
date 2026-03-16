#pragma once

#include "Contact.hpp"

#define MAX_CONTACT 8
#define DISPLAY_ARRAY_LEN 10

class PhoneBook
{
	public:
		PhoneBook();
		void			display();

		bool			is_valid_index(int index);
		void			next_contact();

		Contact			&get_current_contact();
		Contact			get_contact(int index);
		unsigned char	get_register_contact();

	private:
		Contact 		contact[MAX_CONTACT];
		int				index;
		unsigned char	register_contact;
};