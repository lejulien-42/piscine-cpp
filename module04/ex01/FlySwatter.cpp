//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "FlySwatter.hpp"

FlySwatter::FlySwatter(void): AWeapon("Fly Swatter", 1, 200)
{}

FlySwatter::FlySwatter(FlySwatter const & src): AWeapon("Fly Swatter", 1, 200)
{
	*this = src;
	return ;
}

FlySwatter::~FlySwatter(void)
{}

FlySwatter&	FlySwatter::operator=(FlySwatter const & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_apcost = rhs.getAPCost();
		this->_damage = rhs.getDamage();
	}
	return *this;
}

void FlySwatter::attack() const
{
	std::cout << "* Whooosh *" << std::endl;
}

// ----- by lejulien -----
