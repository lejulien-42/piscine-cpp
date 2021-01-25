/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <lejulien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 12:27:16 by lejulien          #+#    #+#             */
/*   Updated: 2021/01/25 12:27:30 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
}

void
	Zombie::advert()
{
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnnss ...\n";
}

void
	Zombie::announce()
{
	std::cout << "[" << this->name << "] I need brains !!!!!\n";
}
