//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "Victim.hpp"

Victim::Victim(void): _name("Bob")
{
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(std::string name): _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const & src)
{
	*this = src;
	return ;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

std::string	Victim::getName() const
{
	return this->_name;
}

Victim&	Victim::operator=(Victim const & rhs)
{
	this->_name = rhs.getName();
	return *this;
}

void	Victim::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Victim& fx)
{
	os << "I'm " << fx.getName() << " and I like otters!" << std::endl;
	return os;
}

// ----- by lejulien -----
