
#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie()
{
	this->_name = "Empty";
	this->_type = "Empty";
}

Zombie::Zombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
}

void
	Zombie::SetName(std::string name)
{
	this->_name = name;
}

void
	Zombie::SetType(std::string type)
{
	this->_type = type;
}

void
	Zombie::advert() const
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnnss ...\n";
}

void
	Zombie::announce() const
{
	std::cout << "[" << this->_name << "] I need brains !!!!!\n";
}
