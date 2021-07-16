//
// -Created by lejulien @ 42-
//

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <algorithm>
#include <exception>
#include <iostream>

class Span
{
public:
    // Exceptions
	class NotEnoughSpace : public std::exception
	{	
		virtual const char* what() const throw() { return ("Not enough space !"); }
	};
	
	class Full : public std::exception
	{
		virtual const char* what() const throw() { return ("Span is full !"); }
	};

	class TooShortToSpan : public std::exception
	{
		virtual const char* what() const throw() { return ("TooShortToSpan"); }
	};

	template <class Iterator>
	void        addNumber(Iterator begin, Iterator end)
    {
		while (begin != end)
		{
			addNumber(*begin);
			begin++;
		}
	}

	Span(unsigned int n);
	Span(Span const & src);
	void addNumber(int n);
	long shortestSpan();
	long longestSpan();
	~Span(void);
	Span &	operator=(Span const & rhs);
private:
	Span(void);
	unsigned int	_n;
	std::vector<int> _array;
	
};

#endif

// ----- by lejulien -----
