//
//	Made by lejulien
//

#include <exception>
#include <algorithm>

#pragma once

class
	notFoutException: public std::exception
{
	public:
		notFoutException() throw() {}
		virtual ~notFoutException() throw() {}
		virtual const char *what() const throw(){
			return "Element not found";
		};
};

template<typename T typename U>
T<U>::iterator	easyfind(T<U> t, int i)
{
	T::iterator it;
	it = find(t.begin(), t.end(), i);
	if (it != t.end())
		return (it);
	throw notFoutException();
	return (it);
}

//	Made by lejulien@42
