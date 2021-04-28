
#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie()
{
	this->_name = "Empty";
	this->_type = "Empty";
	std::cout << "Zombie " << this->_name << " is born." << std::endl;
}

Zombie::Zombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
    std::cout << "Zombie " << this->_name << " is born." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->_name << " died." << std::endl;
}

void
	Zombie::SetName(std::string name)
{
    std::cout << "Zombie " << this->_name << " become " << name << "." << std::endl;
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
