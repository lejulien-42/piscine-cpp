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
	ClapTrap(unsigned int hit_point, unsigned int max_hit_point, unsigned int energy_point, unsigned int max_energy_point,
          unsigned int level, std::string name, std::string type, unsigned int melee_attack_damage, unsigned int ranged_attack_damage,
          unsigned int armor_damage_reduction);
	ClapTrap(ClapTrap const & src);
	~ClapTrap();
	std::string		get_name();
	ClapTrap&		operator=(ClapTrap const & rhs);
	unsigned int	rangedAttack(std::string const &target);
    unsigned int	meleeAttack(std::string const &target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

protected:
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
