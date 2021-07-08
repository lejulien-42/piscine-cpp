//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "Data.hpp"

Data::Data(void)
{}

Data::Data(Data const & src)
{
	*this = src;
	return ;
}

Data::~Data(void)
{}

int	Data::getFoo(void) const
{
	return this->_foo;
}

Data&	Data::operator=(Data const & rhs)
{
	if (this != &rhs)
		this->_foo = rhs.getFoo();
	return *this;
}

// ----- by lejulien -----
