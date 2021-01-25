
#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "Empty";
	this->type = "Empty";
}

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
}

void
	Zombie::SetName(std::string name)
{
	this->name = name;
}

void
	Zombie::SetType(std::string type)
{
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
