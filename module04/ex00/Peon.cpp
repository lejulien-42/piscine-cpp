//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "Peon.hpp"

Peon::Peon(void): _name("Bob")
{
	std::cout << "Zog zog." << std::endl;
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Peon::Peon(std::string name): _name(name)
{
	std::cout << "Zog zog." << std::endl;
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Peon::Peon(Peon const & src)
{
	*this = src;
	return ;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." <<std::endl;
	std::cout << "Peon " << this->_name << " just died for no apparent reason!" << std::endl;
}

std::string	Peon::getName() const
{
	return this->_name;
}

Peon&	Peon::operator=(Peon const & rhs)
{
	this->_name = rhs.getName();
	return *this;
}

void	Peon::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Peon& fx)
{
	os << "I'm " << fx.getName() << " and I like otters!" << std::endl;
	return os;
}

// ----- by lejulien -----
