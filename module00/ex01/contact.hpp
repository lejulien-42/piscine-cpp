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

	public :void		set_it(int i);
	public :int			get_it();
	public :void		set_val(std::string str, int i);
	public :std::string	get_val(int i);
};
