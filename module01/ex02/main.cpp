
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
		delete z[i];
		i++;
	}
	return (0);
}
