//
// -Created by lejulien @ 42-
//

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
    	SuperTrap();
		SuperTrap(std::string name);
		SuperTrap(SuperTrap const & src);
		~SuperTrap();
		SuperTrap&	operator=(SuperTrap const & rhs);
		using FragTrap::rangedAttack;
		using NinjaTrap::meleeAttack;
};

#endif

// ----- by lejulien -----
