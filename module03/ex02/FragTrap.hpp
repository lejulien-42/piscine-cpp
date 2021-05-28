//
// -Created by lejulien @ 42-
//

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include "ClapTrap.hpp"

#include <iostream>

class FragTrap : public ClapTrap
{
public:
    FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	~FragTrap();
	FragTrap&	    operator=(FragTrap const & rhs);
    unsigned int    vaulthunter_dot_exe(std::string const &target);
private:
	unsigned int	_hit_points;
	unsigned int    _max_hit_point;
	unsigned int    _energy_point;
	unsigned int    _max_energy_point;
	unsigned int    _level;
	std::string     _name;
	std::string     _type;
	unsigned int    _melee_attack_damage;
	unsigned int    _ranged_attack_damage;
	unsigned int    _armor_damage_reduction;
};

#endif

// ----- by lejulien -----
