#include <iostream>
#include "ZombieHorde.hpp"
#include "Zombie.hpp"

static Zombie
	*randomChump()
{
	const char	*names[10] = {"Robert", "Groot", "Sonic", "Naruto", "Brigitte", "Martine", "Ton Pere", "Francois", "Manu", "Patate"};
	Zombie	*z = new Zombie(names[std::rand()%10], "From the horde");
	return (z);
}

ZombieHorde::ZombieHorde(const int n)
{
	Zombie	*zombie[n];
	int		i= 0;

	while (i < n)
	{
		zombie[i] = randomChump();
		i++;
	}
	this->horde;
	this->nbrOfZombie = n;
}

ZombieHorde::~ZombieHorde()
{
	for (int i =  this->nbrOfZombie - 1; i >= 0; i++)
		delete (this->horde[i]);
}

void	ZombieHorde::announce()
{
	for (int i = 0; i < this->nbrOfZombie; i++)
		this->horde[i]->announce();
}
