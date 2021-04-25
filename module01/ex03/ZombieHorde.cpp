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
	this->_horde = horde;
	this->_nbrOfZombie = n;
}

ZombieHorde::~ZombieHorde()
{
	delete[] this->_horde;
}

void	ZombieHorde::announce() const
{
	for (int i = 0; i < this->_nbrOfZombie; i++)
		this->_horde[i].announce();
}
