//
// -Created by lejulien @ 42-
//

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"


class ICharacter;

class AMateria
{
protected:
	unsigned int _xp;
	std::string	_type;
public:
	AMateria(std::string const &type);

	virtual ~AMateria(void);
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);

	AMateria(AMateria const & src);
	AMateria &	operator=(AMateria const & rhs);
	std::string const & getType() const;
	unsigned int getXP() const;
	void	setXP(unsigned int value);

private:
	AMateria(void);
};

#endif

// ----- by lejulien -----
