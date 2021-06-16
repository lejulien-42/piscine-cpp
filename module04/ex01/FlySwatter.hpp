//
// -Created by lejulien @ 42-
//

#ifndef FLYSWATTER_HPP
# define FLYSWATTER_HPP

#include <iostream>
#include "AWeapon.hpp"

class FlySwatter: public AWeapon
{
public:
	FlySwatter(void);
	FlySwatter(FlySwatter const & src);
	~FlySwatter(void);
	FlySwatter &	operator=(FlySwatter const & rhs);
	void attack() const;
};

#endif

// ----- by lejulien -----
