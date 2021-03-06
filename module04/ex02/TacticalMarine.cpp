//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready  for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const & src)
{
	std::cout << "Tactical Marine ready  for battle!" << std::endl;
	*this = src;
	return ;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh..." << std::endl;
}

ISpaceMarine	*TacticalMarine::clone() const
{
	return (new TacticalMarine(*this));
}

void			TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT" << std::endl;
}

void			TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void			TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}

TacticalMarine&	TacticalMarine::operator=(TacticalMarine const & rhs)
{
	if (this != &rhs)
		return *this;
	return *this;
}

// ----- by lejulien -----
