//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	*this = src;
	return ;
}

Bureaucrat::~Bureaucrat(void)
{}

int	Bureaucrat::getFoo(void) const
{
	return this->_foo;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (this != &rhs)
		this->_foo = rhs.getFoo();
	return *this;
}

// ----- by lejulien -----
