
#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
}

void
	Zombie::advert()
{
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnnss ...\n";
}

void
	Zombie::announce()
{
	std::cout << "[" << this->name << "] I need brains !!!!!\n";
}
