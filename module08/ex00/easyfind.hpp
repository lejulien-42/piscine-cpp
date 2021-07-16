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

template<typename T>
typename T::iterator	easyfind(T &t, int i)
{
	typename T::iterator it;
	it = std::find(t.begin(), t.end(), i);
	if (it == t.end())
		throw notFoutException();
	return (it);
}

//	Made by lejulien@42
