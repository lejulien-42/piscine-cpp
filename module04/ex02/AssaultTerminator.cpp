//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & src)
{
	std::cout << "* teleports from space *" << std::endl;
	*this = src;
	return ;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I’ll be back..." << std::endl;
}

ISpaceMarine	*AssaultTerminator::clone() const
{
	return (new AssaultTerminator(*this));
}

void			AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void			AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void			AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}

AssaultTerminator&	AssaultTerminator::operator=(AssaultTerminator const & rhs)
{
	if (this != &rhs)
		return *this;
	return *this;
}

// ----- by lejulien -----
