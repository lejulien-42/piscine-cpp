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

void
	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie
	*ZombieEvent::newZombie(std::string name)
{
	Zombie	*z = new Zombie(name, this->type);
	return (z);
}
