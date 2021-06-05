//
// -Created by lejulien @ 42-
//

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap();
	ScavTrap&	    operator=(ScavTrap const & rhs);
	void            challengeNewcomer(std::string const &target);
};

#endif

// ----- by lejulien -----
