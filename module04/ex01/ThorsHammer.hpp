//
// -Created by lejulien @ 42-
//

#ifndef THORSHAMMER_HPP
# define THORSHAMMER_HPP

#include <iostream>
#include "AWeapon.hpp"

class ThorsHammer: public AWeapon
{
public:
	ThorsHammer(void);
	ThorsHammer(ThorsHammer const & src);
	~ThorsHammer(void);
	ThorsHammer &	operator=(ThorsHammer const & rhs);
	void attack() const;
};

#endif

// ----- by lejulien -----
