/*
 *
 *
 *					MADE BY LEJULIEN
 *
 *
 */
#pragma once
#include <iostream>
#include <string>

class	Contact
{
	int			is_set;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	login;
	std::string	postal_addr;
	std::string	email_addr;
	std::string	phone_nbr;
	std::string	b_date;
	std::string	fav_meal;
	std::string	underwear_color;
	std::string	darkest_secret;

	public :void
		set_it(int i)
	{
		is_set = i;
	}
	public :int
		get_it()
	{
		return (is_set);
	}
	public :void
		set_val(std::string str, int i)
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
};
