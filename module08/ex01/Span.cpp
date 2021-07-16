//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "Span.hpp"
#include <iterator>

Span::Span(void): _n(0)
{}

Span::Span(unsigned int n): _n(n)
{}

Span::Span(Span const & src): _n(src._n), _array(src._array)
{
	return ;
}

Span::~Span(void)
{}

Span&	Span::operator=(Span const & rhs)
{
	if (this == &rhs)
		return *this;
	this->_n = rhs._n;
	this->_array = rhs._array;
	return *this;
}

void	Span::addNumber(int n)
{
	if (this->_array.size() < this->_n)
		this->_array.push_back(n);
	else
		throw Span::Full();
	std::sort(this->_array.begin(), this->_array.end());
}

long	Span::shortestSpan()
{
	if (this->_array.size() <= 1)
		throw Span::TooShortToSpan();
	int span = -1;
	int buffer;
	for (std::vector<int>::iterator i = this->_array.begin(); i < this->_array.end(); i++)
	{
		buffer = *i;
		i++;
		if ((span == -1 || ((*i - buffer) < span)) && *i != 0)
			span = *i - buffer;
	}
	return ((unsigned long)span);
}

long Span::longestSpan()
{
	if (this->_array.size() <= 1)
		throw Span::TooShortToSpan();

	std::vector<int>::iterator min;
	std::vector<int>::iterator max;

	min = std::min_element(this->_array.begin(), this->_array.end());
	max = std::max_element(this->_array.begin(), this->_array.end());
	long rtn = (long)(*min) - (long)(*max);

	if (rtn < 0)
		return (rtn * -1);
	return (rtn);
}
// ----- by lejulien -----
