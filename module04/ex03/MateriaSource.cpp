//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "MateriaSource.hpp"

IMateriaSource::~IMateriaSource(){}
MateriaSource::~MateriaSource(void)
{
	int i = 0;
	while (i < 4)
	{
		if (this->_mat[i] != NULL)
			delete this->_mat[i];
		i++;
	}
}

MateriaSource::MateriaSource(void)
{
	this->_mat[0] = NULL;
	this->_mat[1] = NULL;
	this->_mat[2] = NULL;
	this->_mat[3] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	*this = src;
	return ;
}

void	MateriaSource::learnMateria(AMateria *mat)
{
	int i = 0;
	while (i < 4)
	{
		if (this->_mat[i] == NULL)
		{
			this->_mat[i] = mat;
			return ;
		}
		i++;
	}
}

AMateria *MateriaSource::createMateria(std::string const &target)
{
	int i = 0;
	while (i < 4)
	{
		if (this->_mat[i] != NULL && this->_mat[i]->getType().compare(target)) 
			return this->_mat[i]->clone();
		i++;
	}
	return 0;
}

MateriaSource&	MateriaSource::operator=(MateriaSource const & rhs)
{
	if (this != &rhs)
		return *this;
	return *this;
}

// ----- by lejulien -----
