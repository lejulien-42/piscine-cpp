//
// -Created by lejulien @ 42-
//

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include <iostream>
#include "AWeapon.hpp"

class PowerFist: public AWeapon
{
public:
	PowerFist(void);
	PowerFist(PowerFist const & src);
	~PowerFist(void);
	PowerFist &	operator=(PowerFist const & rhs);
	void	attack() const;
};

#endif

// ----- by lejulien -----
