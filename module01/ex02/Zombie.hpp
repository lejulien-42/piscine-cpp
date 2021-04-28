/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <lejulien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 12:28:08 by lejulien          #+#    #+#             */
/*   Updated: 2021/01/25 12:28:13 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class
	Zombie
{
	private:
		std::string	_name;
		std::string	_type;

	public:
		Zombie(std::string name, std::string type);
		~Zombie();
		void	announce();
};
