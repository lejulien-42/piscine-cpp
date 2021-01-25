
#pragma once
#include "Zombie.hpp"

class
	ZombieHorde
{
	private:
		int		nbrOfZombie;
		Zombie	*horde;
	public:
		ZombieHorde(const int n);
		~ZombieHorde();
		void	announce();
};
