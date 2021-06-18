//
// -Created by lejulien @ 42-
//

#ifndef SHREK_HPP
# define SHREK_HPP

#include <iostream>

class Shrek
{
public:
	Shrek(void);
	Shrek(std::string name);
	Shrek(Shrek const & src);
	std::string getName() const;
	void	getPolymorphed() const;
	~Shrek(void);
	Shrek &	operator=(Shrek const & rhs);
private:
	std::string	_name;
};

std::ostream & operator<<(std::ostream&os, Shrek const & fx);

#endif

// ----- by lejulien -----
