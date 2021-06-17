//
// -Created by lejulien @ 42-
//

#ifndef THIEF_HPP
# define THIEF_HPP

#include <iostream>

class Thief
{
public:
	Thief(void);
	Thief(std::string name);
	Thief(Thief const & src);
	std::string getName() const;
	void	getPolymorphed() const;
	~Thief(void);
	Thief &	operator=(Thief const & rhs);
private:
	std::string	_name;
};

std::ostream & operator<<(std::ostream&os, Thief const & fx);

#endif

// ----- by lejulien -----
