//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource(void)
{}

IMateriaSource::IMateriaSource(IMateriaSource const & src)
{
	*this = src;
	return ;
}

IMateriaSource::~IMateriaSource(void)
{}

int	IMateriaSource::getFoo(void) const
{
	return this->_foo;
}

IMateriaSource&	IMateriaSource::operator=(IMateriaSource const & rhs)
{
	if (this != &rhs)
		this->_foo = rhs.getFoo();
	return *this;
}

// ----- by lejulien -----
