//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void): Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & src)
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	*this = src;
	return ;
}

SuperMutant::~SuperMutant(void)
{}

void SuperMutant::takeDamage(int damage)
{
	if (this->_hp == 0)
		return ;
	if (this->_hp - (damage - 3) <= 0)
	{
		std::cout << "Aaargh..." << std::endl;
		this->_hp = 0;
	}
	else
		this->_hp = this->_hp - (damage - 3);
}

SuperMutant&	SuperMutant::operator=(SuperMutant const & rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
		this->_hp = rhs.getHP();
	}
	return *this;
}

// ----- by lejulien -----
