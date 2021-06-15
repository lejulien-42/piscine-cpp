//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "PowerFist.hpp"

PowerFist::PowerFist(void): AWeapon("Power Fist", 8, 50)
{}

PowerFist::PowerFist(PowerFist const & src): AWeapon("Power Fist", 8, 50)
{
	*this = src;
	return ;
}

PowerFist::~PowerFist(void)
{}


PowerFist&	PowerFist::operator=(PowerFist const & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_apcost = rhs.getAPCost();
		this->_damage = rhs.getDamage();
	}	
	return *this;
}

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

// ----- by lejulien -----
