//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "Thief.hpp"

Thief::Thief(void): _name("Bob")
{
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
	std::cout << "Woaw nice watch." << std::endl;
}

Thief::Thief(std::string name): _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
	std::cout << "Woaw nice watch." << std::endl;
}

Thief::Thief(Thief const & src)
{
	*this = src;
	return ;
}

Thief::~Thief(void)
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

std::string	Thief::getName() const
{
	return this->_name;
}

Thief&	Thief::operator=(Thief const & rhs)
{
	this->_name = rhs.getName();
	return *this;
}

void	Thief::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a big pig!" << std::endl;
	std::cout << "Aoutch!" <<std::endl;
}

std::ostream& operator<<(std::ostream& os, const Thief& fx)
{
	os << "I'm " << fx.getName() << " and I like money!" << std::endl;
	return os;
}

// ----- by lejulien -----
