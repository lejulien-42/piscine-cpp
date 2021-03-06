//
// -Created by lejulien @ 42-
//

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"
#include "Peon.hpp"
#include "Thief.hpp"
#include "Shrek.hpp"

class Sorcerer
{
public:
	Sorcerer(std::string name, std::string type);
	Sorcerer(Sorcerer const & src);
	~Sorcerer(void);
	Sorcerer &	operator=(Sorcerer const & rhs);
	std::string	getName() const;
	std::string	getTitle() const;
	void		polymorph(Victim const &vic) const;
	void		polymorph(Peon const &peo) const;
	void		polymorph(Thief const &thi) const;
	void		polymorph(Shrek const &shr) const;
	void		introduce(void) const;
private:
	Sorcerer(void);
	std::string	name;
	std::string	title;
};

std::ostream & operator<<(std::ostream& os, Sorcerer const & fx);

#endif

// ----- by lejulien -----
