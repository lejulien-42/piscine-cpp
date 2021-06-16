//
// -Created by lejulien @ 42-
//

#ifndef MUTANTFLY_HPP
# define MUTANTFLY_HPP

#include <iostream>
#include "Enemy.hpp"

class MutantFly: public Enemy
{
public:
	MutantFly(void);
	MutantFly(MutantFly const & src);
	~MutantFly(void);
	MutantFly &	operator=(MutantFly const & rhs);
	void	takeDamage(int damage);
};

#endif

// ----- by lejulien -----
