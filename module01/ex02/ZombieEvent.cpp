/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <lejulien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 12:27:39 by lejulien          #+#    #+#             */
/*   Updated: 2021/01/25 12:27:46 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>

ZombieEvent::ZombieEvent(): _type("no_event") {}

void
	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie
	*ZombieEvent::newZombie(std::string name)
{
	Zombie	*z = new Zombie(name, this->_type);
	return (z);
}
