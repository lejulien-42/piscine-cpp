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
