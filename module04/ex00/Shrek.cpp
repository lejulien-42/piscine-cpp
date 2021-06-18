//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "Shrek.hpp"

Shrek::Shrek(void): _name("Shrek")
{
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
	std::cout << "Fiona where are you ?" << std::endl;
}

Shrek::Shrek(std::string name): _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
	std::cout << "Fiona where are you ?" << std::endl;
}

Shrek::Shrek(Shrek const & src)
{
	*this = src;
	return ;
}

Shrek::~Shrek(void)
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

std::string	Shrek::getName() const
{
	return this->_name;
}

Shrek&	Shrek::operator=(Shrek const & rhs)
{
	this->_name = rhs.getName();
	return *this;
}

void	Shrek::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a wonderfull prince !" << std::endl;
	std::cout << "Splendid !" <<std::endl;
}

std::ostream& operator<<(std::ostream& os, const Shrek& fx)
{
	os << "I'm " << fx.getName() << " and I like Fiona !" << std::endl;
	return os;
}

// ----- by lejulien -----
