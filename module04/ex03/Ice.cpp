//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice(void):AMateria("ice") {}

Ice::Ice(Ice const & src):AMateria("ice")
{
	this->_xp = src.getXP();
	this->_type = src.getType();
	return ;
}

Ice::~Ice(void) {}

void	Ice::use(ICharacter &target)
{
	this->_xp += 10;
	std::cout << "* shoot an ice bolt at <taget name> *" << std::endl;
}

AMateria *Ice::clone() const
{
	AMateria *ret = new Ice();
	ret->setXP(this->_xp);
	return ret;
}

Ice&	Ice::operator=(Ice const & rhs)
{
	if (this != &rhs)
	{
		this->_xp = rhs.getXP();
		this->_type = rhs.getType();
	}
	return *this;
}

// ----- by lejulien -----
