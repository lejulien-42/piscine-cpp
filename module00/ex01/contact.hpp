/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <lejulien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 12:21:21 by lejulien          #+#    #+#             */
/*   Updated: 2021/01/25 12:21:25 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class	Contact
{
	private:
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

	public :
		void		set_it(int i);
		int			get_it();
		void		set_val(std::string str, int i);
		std::string	get_val(int i);
};
