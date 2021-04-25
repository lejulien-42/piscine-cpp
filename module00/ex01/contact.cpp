/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <lejulien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 12:21:06 by lejulien          #+#    #+#             */
/*   Updated: 2021/01/25 12:21:09 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void
	Contact::set_it(int i)
{
	this->_is_set = i;
}

int
	Contact::get_it() const
{
	return (this->_is_set);
}

void
	Contact::set_val(std::string str, int i)
{
	switch(i)
	{
		case 0:
			this->_first_name = str;
		case 1:
			this->_last_name = str;
		case 2:
			this->_nickname = str;
		case 3:
			this->_login = str;
		case 4:
			this->_postal_addr = str;
		case 5:
			this->_email_addr = str;
		case 6:
			this->_phone_nbr = str;
		case 7:
			this->_b_date = str;
		case 8:
			this->_fav_meal = str;
		case 9:
			this->_underwear_color = str;
		case 10:
			this->_darkest_secret = str;
	}
}

std::string
	Contact::get_val(int i) const
{
	switch(i)
	{
		case 0:
			return(this->_first_name);
		case 1:
			return(this->_last_name);
		case 2:
			return(this->_nickname);
		case 3:
			return(this->_login);
		case 4:
			return(this->_postal_addr);
		case 5:
			return(this->_email_addr);
		case 6:
			return(this->_phone_nbr);
		case 7:
			return(this->_b_date);
		case 8:
			return(this->_fav_meal);
		case 9:
			return(this->_underwear_color);
		case 10:
			return(this->_darkest_secret);
	}
	return (NULL);
}