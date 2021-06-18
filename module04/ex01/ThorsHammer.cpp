//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "ThorsHammer.hpp"

ThorsHammer::ThorsHammer(void): AWeapon("Thor's Hammer", 5, 999999)
{}

ThorsHammer::ThorsHammer(ThorsHammer const & src): AWeapon("Plasma Rifle", 5, 999999)
{
	*this = src;
	return ;
}

ThorsHammer::~ThorsHammer(void)
{}

ThorsHammer&	ThorsHammer::operator=(ThorsHammer const & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_apcost = rhs.getAPCost();
		this->_damage = rhs.getDamage();
	}
	return *this;
}

void ThorsHammer::attack() const
{
	std::cout << "* ZzZzZz Booom *" << std::endl;
}

// ----- by lejulien -----
