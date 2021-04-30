//
// -Created by lejulien @ 42-
//

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>

class FragTrap
{
public:
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	~FragTrap(void);
	FragTrap&	operator=(FragTrap const & rhs);
private:
	unsigned int	_hit_points;
	unsigned int    _max_hit_point;
	unsigned int    _energy_point;
	unsigned int    _max_energy_point;
	unsigned int    _level;
	std::string _name;
	unsigned int    _melee_attack_damage;
	unsigned int    _ranged_attack_damage;
	unsigned int    _armor_damage_reduction;
};

#endif

// ----- by lejulien -----
