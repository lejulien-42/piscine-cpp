//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria(void): _xp(0)
{}

AMateria::AMateria(std::string const &type): _xp(0), _type(type) {}

AMateria::AMateria(AMateria const & src): _xp(0)
{
	*this = src;
	return ;
}

AMateria::~AMateria(void)
{}

void	AMateria::use(ICharacter &target) { this->_xp += 10;(void) target;}
AMateria *AMateria::clone() const
{
	return NULL;
}

// setter
unsigned int	AMateria::getXP(void) const { return this->_xp; }
std::string const & AMateria::getType() const { return this->_type; }

//getters
void AMateria::setXP(unsigned int value) { this->_xp = value; }

AMateria&	AMateria::operator=(AMateria const & rhs)
{
	if (this != &rhs)
		this->_xp = rhs.getXP();
	return *this;
}

// ----- by lejulien -----
