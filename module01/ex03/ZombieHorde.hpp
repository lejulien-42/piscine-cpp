
#pragma once
#include "Zombie.hpp"

class
	ZombieHorde
{
	private:
		int		_nbrOfZombie;
		Zombie	*_horde;
	public:
		ZombieHorde(const int n);
		~ZombieHorde();
		void	announce() const;
};
