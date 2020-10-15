#include "Zombie.hpp"
#pragma once

class
	ZombieEvent
{
	std::string	type;

	public:
		void	setZombieType(std::string type);
		Zombie	*newZombie(std::string name);
};
