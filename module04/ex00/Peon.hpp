//
// -Created by lejulien @ 42-
//

#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>

class Peon
{
public:
	Peon(void);
	Peon(std::string name);
	Peon(Peon const & src);
	std::string getName() const;
	void	getPolymorphed() const;
	~Peon(void);
	Peon &	operator=(Peon const & rhs);
private:
	std::string	_name;
};

std::ostream & operator<<(std::ostream&os, Peon const & fx);

#endif

// ----- by lejulien -----
