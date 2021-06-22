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
{
	s_squad *ptr;

	while (this->_squad != NULL)
	{
		ptr = this->_squad;
		this->_squad = ptr->next;
		delete ptr->element;
		delete ptr;
	}
}

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

	if (n + 1 > this->getCount())
		return NULL;
	i = 0;
	ptr = this->_squad;
	while (i < n)
	{
		ptr = ptr->next;
		i++;
	}
	return ptr->element;
}

int 			Squad::push(ISpaceMarine *space)
{
	s_squad	*newer;
	s_squad *ptr;

	newer = new s_squad;
	ptr = this->_squad;
	newer->element = space;
	newer->next = NULL;
	if (!this->_squad)
	{
		this->_squad = newer;
		return 1;
	}
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = newer;
	return this->getCount();
}

Squad&	Squad::operator=(Squad const & rhs)
{
	int i = 0;
	int count = rhs.getCount();
	if (this != &rhs)
	{
		while (i < count)
		{
			this->push(rhs.getUnit(i)->clone());
			i++;
		}
	}
	return *this;
}

// ----- by lejulien -----
