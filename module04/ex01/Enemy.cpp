//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "Enemy.hpp"

Enemy::Enemy(void) {}

Enemy::Enemy(int hp, std::string const &type): _type(type), _hp(hp) {}

Enemy::Enemy(Enemy const & src)
{
	*this = src;
	return ;
}

Enemy::~Enemy(void)
{}

std::string Enemy::getType() const
{
	return this->_type;
}

int			Enemy::getHP() const
{
	return this->_hp;
}

void Enemy::takeDamage(int damage)
{
	if (this->_hp - damage < 0)
		this->_hp = 0;
	else
		this->_hp = this->_hp - damage;
}

Enemy&	Enemy::operator=(Enemy const & rhs)
{
	if (this != &rhs)
	{
		this->_hp = rhs.getHP();
		this->_type = rhs.getType();
	}
	return *this;
}

// ----- by lejulien -----
