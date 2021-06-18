//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "ChuckNoris.hpp"

ChuckNoris::ChuckNoris(void): Enemy(170, "Chuck Norris")
{
	std::cout << "Hi !" << std::endl;
}

ChuckNoris::ChuckNoris(ChuckNoris const & src)
{
	std::cout << "Hi" << std::endl;
	*this = src;
	return ;
}

ChuckNoris::~ChuckNoris(void)
{}

void ChuckNoris::takeDamage(int damage)
{
	(void)damage;
	std::cout << "You can't because it's chuck noris" << std::endl;
}

ChuckNoris&	ChuckNoris::operator=(ChuckNoris const & rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
		this->_hp = rhs.getHP();
	}
	return *this;
}

// ----- by lejulien -----
