//
// -Created by lejulien @ 42-
//

#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure: public AMateria
{
public:
	Cure(void);
	Cure(Cure const & src);
	~Cure(void);
	Cure &	operator=(Cure const & rhs);
	AMateria	*clone() const;
	void use(ICharacter &target);
};

#endif

// ----- by lejulien -----
