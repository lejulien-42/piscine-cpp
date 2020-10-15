
#pragma once
#include "Zombie.hpp"

class
	ZombieHorde
{
	public:
		ZombieHorde(const int n);
		~ZombieHorde();
		void	announce();
	private:
		Zombie	**horde;
		int		nbrOfZombie;
};
