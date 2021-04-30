//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string name): _hit_points(100), _max_hit_point(100), _energy_point(100),
                                            _max_energy_point(100), _level(1), _name(name), _melee_attack_damage(30),
                                            _ranged_attack_damage(20), _armor_damage_reduction(5)
{
    std::cout << "FR4G-TP " << this->_name << " was summoned." << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
    std::cout << "FR4G-TP " << this->_name << " was summoned." << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FR4G-TP " << this->_name << " was destroyed." << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const & rhs)
{
	if (this != &rhs)
    {
		this->_hit_points = rhs._hit_points;
		this->_max_hit_point = rhs._max_hit_point;
		this->_energy_point = rhs._energy_point;
		this->_max_energy_point = rhs._max_energy_point;
		this->_level = rhs._level;
        this->_name = rhs._name;
        this->_melee_attack_damage = rhs._melee_attack_damage;
        this->_ranged_attack_damage = rhs._ranged_attack_damage;
        this->_armor_damage_reduction = rhs._armor_damage_reduction;
    }
	return *this;
}

// ----- by lejulien -----
