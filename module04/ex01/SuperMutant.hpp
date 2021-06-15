//
// -Created by lejulien @ 42-
//

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include <iostream>
#include "Enemy.hpp"

class SuperMutant: public Enemy
{
public:
	SuperMutant(void);
	SuperMutant(SuperMutant const & src);
	~SuperMutant(void);
	SuperMutant &	operator=(SuperMutant const & rhs);
	void	takeDamage(int damage);
};

#endif

// ----- by lejulien -----
