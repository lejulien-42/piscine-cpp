//
// -Created by lejulien @ 42-
//

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim
{
public:
	Victim(void);
	Victim(std::string name);
	Victim(Victim const & src);
	std::string getName() const;
	void	getPolymorphed() const;
	~Victim(void);
	Victim &	operator=(Victim const & rhs);
private:
	std::string	_name;
};

std::ostream & operator<<(std::ostream&os, Victim const & fx);

#endif

// ----- by lejulien -----
