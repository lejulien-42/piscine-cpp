//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void): Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & src)
{
	std::cout << "* click click click *" << std::endl;
	*this = src;
	return ;
}

RadScorpion::~RadScorpion(void)
{}

void RadScorpion::takeDamage(int damage)
{
	if (this->_hp == 0)
		return ;
	if (this->_hp - damage <= 0)
	{
		std::cout << "* SPROTCH *" << std::endl;
		this->_hp = 0;
	}
	else
		this->_hp = this->_hp - damage;
}

RadScorpion&	RadScorpion::operator=(RadScorpion const & rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
		this->_hp = rhs.getHP();
	}
	return *this;
}

// ----- by lejulien -----
