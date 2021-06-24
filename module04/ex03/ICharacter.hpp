//
// -Created by lejulien @ 42-
//

#ifndef IMATERIALSOURCE_HPP
# define IMATERIALSOURCE_HPP

#include <iostream>
#include "AMateria.hpp"

class IMaterialSource
{
public:
	virtual ~IMaterialSource() {}
	virtual void learnMaterial(AMateria *) = 0;
	virtual AMateria* createMateria(std::string const &type) = 0;
};

#endif

// ----- by lejulien -----
