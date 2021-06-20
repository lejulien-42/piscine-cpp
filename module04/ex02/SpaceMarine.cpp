//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "SpaceMarine.hpp"

SpaceMarine::SpaceMarine(void): _next(NULL)
{
	std::cout << "Tactical Marine ready  for battle!" << std::endl;
}

SpaceMarine::SpaceMarine(SpaceMarine const & src): _next(NULL)
{
	std::cout << "Tactical Marine ready  for battle!" << std::endl;
	*this = src;
	return ;
}

SpaceMarine::~SpaceMarine(void)
{
	std::cout << "Aaargh..." << std::endl;
}

ISpaceMarine	*SpaceMarine::clone() const
{
	return (new SpaceMarine(*this));
}

void			SpaceMarine::battleCry() const
{
	std::cout << "For the holy PLOT" << std::endl;
}

void			SpaceMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void			SpaceMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}

ISpaceMarine	*SpaceMarine::getNext() const
{
	return this->_next;
}

void			SpaceMarine::setNext(ISpaceMarine *next)
{
	this->_next = next;
}

SpaceMarine&	SpaceMarine::operator=(SpaceMarine const & rhs)
{
	if (this != &rhs)
		return *this;
	return *this;
}

// ----- by lejulien -----
