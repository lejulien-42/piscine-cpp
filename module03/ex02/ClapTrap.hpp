//
// -Created by lejulien @ 42-
//

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
public:
    ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & src);
	~ClapTrap();
	ClapTrap&	    operator=(ClapTrap const & rhs);
	unsigned int    rangedAttack(std::string const &target);
    unsigned int    meleeAttack(std::string const &target);
	void            takeDamage(unsigned int amount);
	void            beRepaired(unsigned int amount);
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
