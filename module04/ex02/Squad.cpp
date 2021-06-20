//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "Squad.hpp"

Squad::Squad(void): _squad(NULL)
{}

Squad::Squad(Squad const & src)
{
	*this = src;
	return ;
}

Squad::~Squad(void)
{}

int		Squad::getCount() const
{
	int count;
	s_squad *ptr;

	count = 0;
	if (this->_squad == NULL)
		return count;
	ptr = this->_squad;
	while (ptr->next != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count + 1);
}

ISpaceMarine	*Squad::getUnit(int n) const
{
	s_squad	*ptr;
	int		i;

	if (n >= this->getCount())
		return NULL;
	i = 0;
	ptr = this->_squad;
	while (i < n - 1)
	{
		ptr = ptr->next;
	}
	return ptr->element;
}

int 			Squad::push(ISpaceMarine *space)
{
	s_squad	*newer;
	s_squad *ptr;

	newer = new s_squad;
	
	if (this->_squad == NULL)
	{
	}
	return this->getCount();
}

Squad&	Squad::operator=(Squad const & rhs)
{
	if (this != &rhs)
		return *this;
	return *this;
}

// ----- by lejulien -----
