//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "Character.hpp"

Character::Character(void): _name("Bob"), _weapon(NULL), _ap(40)
{}

Character::Character(std::string const &name): _name(name), _weapon(NULL), _ap(40)
{}

Character::Character(Character const & src)
{
	*this = src;
	return ;
}

void	Character::recoverAP()
{
	if (this->_ap + 10 > 40)
		this->_ap = 40;
	else
		this->_ap = this->_ap + 10;
}

void	Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
}

void	Character::attack(Enemy *enemy)
{
	if (this->_weapon == NULL)
		return ;
	if (this->_ap < this->_weapon->getAPCost())
		return ;
	std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
	this->_weapon->attack();
	this->_ap = this->_ap - this->_weapon->getAPCost();
	enemy->takeDamage(this->_weapon->getDamage());
	if (enemy->getHP() == 0)
		delete(enemy);
}

std::string	Character::getName() const
{
	return this->_name;
}

int			Character::getAP() const
{
	return this->_ap;
}

AWeapon		*Character::getWeapon() const
{
	return this->_weapon;
}

Character::~Character(void)
{}

Character&	Character::operator=(Character const & rhs)
{
	if (this != &rhs)
		return *this ;
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Character &fx)
{
	if (fx.getWeapon() == NULL)
		os << fx.getName() << " has " << fx.getAP() << " AP and is unarmed" << std::endl;
	else
		os << fx.getName() << " has " << fx.getAP() << " AP and wields a " << fx.getWeapon()->getName() << std::endl;
	return os;
}

// ----- by lejulien -----
