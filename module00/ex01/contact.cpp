/*
 *
 *				MADE BY LEJULIEN
 *
 */

#include "contact.hpp"

void
	Contact::set_it(int i)
{
	is_set = i;
}

int
	Contact::get_it()
{
	return (is_set);
}

void
	Contact::set_val(std::string str, int i)
{
	switch(i)
	{
		case 0:
			first_name = str;
		case 1:
			last_name = str;
		case 2:
			nickname = str;
		case 3:
			login = str;
		case 4:
			postal_addr = str;
		case 5:
			email_addr = str;
		case 6:
			phone_nbr = str;
		case 7:
			b_date = str;
		case 8:
			fav_meal = str;
		case 9:
			underwear_color = str;
		case 10:
			darkest_secret = str;
	}
}

std::string
	Contact::get_val(int i)
{
	switch(i)
	{
		case 0:
			return(first_name);
		case 1:
			return(last_name);
		case 2:
			return(nickname);
		case 3:
			return(login);
		case 4:
			return(postal_addr);
		case 5:
			return(email_addr);
		case 6:
			return(phone_nbr);
		case 7:
			return(b_date);
		case 8:
			return(fav_meal);
		case 9:
			return(underwear_color);
		case 10:
			return(darkest_secret);
	}
	return (NULL);
}

