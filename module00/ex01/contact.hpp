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
		int			_is_set;
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_login;
		std::string	_postal_addr;
		std::string	_email_addr;
		std::string	_phone_nbr;
		std::string	_b_date;
		std::string	_fav_meal;
		std::string	_underwear_color;
		std::string	_darkest_secret;

	public :
		void		set_it(int i);
		int			get_it() const;
		void		set_val(std::string str, int i);
		std::string	get_val(int i) const;
};
