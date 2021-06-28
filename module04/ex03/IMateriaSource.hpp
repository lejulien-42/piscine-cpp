//
// -Created by lejulien @ 42-
//

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"

class AMateria ;

class IMateriaSource
{
public:
	virtual ~IMateriaSource(void) = 0;
	virtual void learnMateria(AMateria *) = 0;
	virtual AMateria* createMateria(std::string const &type) = 0;
};


#endif

// ----- by lejulien -----
