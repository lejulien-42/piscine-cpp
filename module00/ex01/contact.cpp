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
	this->is_set = i;
}

int
	Contact::get_it()
{
	return (this->is_set);
}

void
	Contact::set_val(std::string str, int i)
{
	switch(i)
	{
		case 0:
			this->first_name = str;
		case 1:
			this->last_name = str;
		case 2:
			this->nickname = str;
		case 3:
			this->login = str;
		case 4:
			this->postal_addr = str;
		case 5:
			this->email_addr = str;
		case 6:
			this->phone_nbr = str;
		case 7:
			this->b_date = str;
		case 8:
			this->fav_meal = str;
		case 9:
			this->underwear_color = str;
		case 10:
			this->darkest_secret = str;
	}
}

std::string
	Contact::get_val(int i)
{
	switch(i)
	{
		case 0:
			return(this->first_name);
		case 1:
			return(this->last_name);
		case 2:
			return(this->nickname);
		case 3:
			return(this->login);
		case 4:
			return(this->postal_addr);
		case 5:
			return(this->email_addr);
		case 6:
			return(this->phone_nbr);
		case 7:
			return(this->b_date);
		case 8:
			return(this->fav_meal);
		case 9:
			return(this->underwear_color);
		case 10:
			return(this->darkest_secret);
	}
	return (NULL);
}

