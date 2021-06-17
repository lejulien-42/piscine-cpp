//
// -Created by lejulien @ 42-
//

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <cstdlib>

class FragTrap
{
public:
    FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	~FragTrap();
	FragTrap&	    operator=(FragTrap const & rhs);
	unsigned int    rangedAttack(std::string const &target);
    unsigned int    meleeAttack(std::string const &target);
    unsigned int    vaulthunter_dot_exe(std::string const &target);
	void            takeDamage(unsigned int amount);
	void            beRepaired(unsigned int amount);
private:
	unsigned int	_hit_points;
	unsigned int    _max_hit_point;
	unsigned int    _energy_point;
	unsigned int    _max_energy_point;
	unsigned int    _level;
	std::string     _name;
	unsigned int    _melee_attack_damage;
	unsigned int    _ranged_attack_damage;
	unsigned int    _armor_damage_reduction;
};

#endif

// ----- by lejulien -----
