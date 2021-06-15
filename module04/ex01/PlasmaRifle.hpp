//
// -Created by lejulien @ 42-
//

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
public:
	PlasmaRifle(void);
	PlasmaRifle(PlasmaRifle const & src);
	~PlasmaRifle(void);
	PlasmaRifle &	operator=(PlasmaRifle const & rhs);
	void attack() const;
};

#endif

// ----- by lejulien -----
