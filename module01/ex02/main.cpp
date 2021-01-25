/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <lejulien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 12:26:01 by lejulien          #+#    #+#             */
/*   Updated: 2021/01/25 12:26:27 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

Zombie
	*randomChump()
{
	ZombieEvent		zevent;
	zevent.setZombieType("random");
	const char	*names[10] = { "Robert", "Groot", "Sonic", "Naruto", "Brigitte", "Martine", "Ton pere", "Francois", "Manu", "Patate"};
	Zombie	*z= zevent.newZombie(names[std::rand() % 10]);
	return (z);
}

int
	main()
{
	const int nbr = 20;
	Zombie	*z[nbr];
	int i=0;


	while (i < nbr)
	{
		z[i] = randomChump();
		z[i]->advert();
		z[i]->announce();
		delete z[i];
		i++;
	}
	return (0);
}
