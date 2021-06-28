//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "Character.hpp"

Character::Character(void): _name("Bob")
{
	this->_mat[0] = NULL;
	this->_mat[1] = NULL;
	this->_mat[2] = NULL;
	this->_mat[3] = NULL;
}

Character::Character(std::string const &name): _name(name)
{
	this->_mat[0] = NULL;
	this->_mat[1] = NULL;
	this->_mat[2] = NULL;
	this->_mat[3] = NULL;
}

Character::Character(Character const & src)
{
	int i = 0;
	this->_name = src.getName();
	while (i < 4)
	{
		this->_mat[i] = src.getMateria(i);	
		i++;
	}
	return ;
}

Character::~Character(void)
{
	int i = 0;
	while (i < 4)
	{
		if (this->_mat[i] != NULL)
			delete this->_mat[i];
		i++;
	}
}


void Character::equip(AMateria *m)
{
	int i = 0;
	while (i < 4)
	{
		if (this->_mat[i] == NULL)
		{
			this->_mat[i] = m;
			return ;
		}
		i++;
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	this->_mat[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3 || this->_mat[idx] == NULL)
		return ;
	this->_mat[idx]->use(target);
}

std::string const &Character::getName(void) const
{
	return this->_name;
}

AMateria *Character::getMateria(int idx) const
{
	if (idx < 0 || idx > 3)
		return NULL;
	return this->_mat[idx];
}

Character&	Character::operator=(Character const & rhs)
{
	int i = 0;

	if (this != &rhs)
	{
		this->_name = rhs.getName();
		while (i < 4)
		{
			this->_mat[i] = rhs.getMateria(i);
			i++;
		}
	}
	return *this;
}

// ----- by lejulien -----
