//
// -Created by lejulien @ 42-
//

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
    NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const & src);
	~NinjaTrap();
	NinjaTrap&	operator=(NinjaTrap const & rhs);
    void		ninjaShoebox(ClapTrap &cible);
    void		ninjaShoebox(NinjaTrap &cible);
    void		ninjaShoebox(FragTrap &cible);
    void		ninjaShoebox(ScavTrap &cible);
};

#endif

// ----- by lejulien
