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

Zombie::Zombie(std::string name, std::string type): _name(name), _type(type)
{
    std::cout << "Zombie " << this->_name << " is born." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->_name << " died." << std::endl;
}

void
	Zombie::announce()
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnnss ...\n";
}
