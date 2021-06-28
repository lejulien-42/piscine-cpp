//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure(void):AMateria("cure") {}

Cure::Cure(Cure const & src):AMateria("cure")
{
	this->_xp = src.getXP();
	this->_type = src.getType();
	return ;
}

Cure::~Cure(void) {}

void	Cure::use(ICharacter &target)
{
	this->_xp += 10;
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria *Cure::clone() const
{
	AMateria *ret = new Cure();
	ret->setXP(this->_xp);
	return ret;
}

Cure&	Cure::operator=(Cure const & rhs)
{
	if (this != &rhs)
	{
		this->_xp = rhs.getXP();
		this->_type = rhs.getType();
	}
	return *this;
}

// ----- by lejulien -----
