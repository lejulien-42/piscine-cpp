//
// -Created by lejulien @ 42-
//

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <cstdlib>
#include <iostream>

class ScavTrap
{
public:
    ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap();
	ScavTrap&	    operator=(ScavTrap const & rhs);
	unsigned int    rangedAttack(std::string const &target);
    unsigned int    meleeAttack(std::string const &target);
	void            takeDamage(unsigned int amount);
	void            beRepaired(unsigned int amount);
	void            challengeNewcomer(std::string const &target);
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
