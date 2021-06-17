//
// -Created by lejulien @ 42-
//

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include <cstdlib>

class FragTrap : virtual public ClapTrap
{
public:
    FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	~FragTrap();
	FragTrap&	    operator=(FragTrap const & rhs);
    unsigned int    vaulthunter_dot_exe(std::string const &target);
};

#endif

// ----- by lejulien -----
