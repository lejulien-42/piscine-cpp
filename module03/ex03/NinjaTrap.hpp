//
// -Created by lejulien @ 42-
//

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
    NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const & src);
	~NinjaTrap();
	NinjaTrap&	    operator=(NinjaTrap const & rhs);
    unsigned int    vaulthunter_dot_exe(std::string const &target);
};

#endif

// ----- by lejulien -----
