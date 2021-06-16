//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "MutantFly.hpp"

MutantFly::MutantFly(void): Enemy(80, "MutantFly")
{
	std::cout << "* BZZZZZZZZ BZZZZZZZ *" << std::endl;
}

MutantFly::MutantFly(MutantFly const & src)
{
	std::cout << "* BZZZZZZZZ BZZZZZZZ *" << std::endl;
	*this = src;
	return ;
}

MutantFly::~MutantFly(void)
{}

void MutantFly::takeDamage(int damage)
{
	if (this->_hp == 0)
		return ;
	if (this->_hp - damage <= 0)
	{
		std::cout << "* SPLASHH *" << std::endl;
		this->_hp = 0;
	}
	else
		this->_hp = this->_hp - damage;
}

MutantFly&	MutantFly::operator=(MutantFly const & rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
		this->_hp = rhs.getHP();
	}
	return *this;
}

// ----- by lejulien -----
