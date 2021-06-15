//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void): AWeapon("Plasma Rifle", 5, 21)
{}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src): AWeapon("Plasma Rifle", 5, 21)
{
	*this = src;
	return ;
}

PlasmaRifle::~PlasmaRifle(void)
{}

PlasmaRifle&	PlasmaRifle::operator=(PlasmaRifle const & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_apcost = rhs.getAPCost();
		this->_damage = rhs.getDamage();
	}
	return *this;
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

// ----- by lejulien -----
