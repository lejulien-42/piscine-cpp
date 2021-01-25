#include <iostream>
#include "ZombieHorde.hpp"
#include "Zombie.hpp"

static void
	randomChump(Zombie *z)
{
	const char	*names[10] = { "Robert", "Groot", "Sonic", "Naruto", "Brigitte", "Martine", "Ton Pere", "Francois", "Manu", "Patate" };
	z->SetName(names[std::rand() % 10]);
	z->SetType("random");
}

ZombieHorde::ZombieHorde(const int n)
{
	Zombie	*horde = new Zombie[n];
	int		i= 0;

	while (i < n)
	{
		randomChump(&horde[i]);
		i++;
	}
	this->horde = horde;
	this->nbrOfZombie = n;
}

ZombieHorde::~ZombieHorde()
{
	delete[] this->horde;
}

void	ZombieHorde::announce()
{
	for (int i = 0; i < this->nbrOfZombie; i++)
		this->horde[i].announce();
}
