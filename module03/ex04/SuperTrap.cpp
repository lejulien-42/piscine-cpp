//
// -Created by lejulien @ 42-
//

// chars 「 」
#include <iostream>
#include "SuperTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

SuperTrap::SuperTrap(): ClapTrap("SuperMan"), FragTrap("SuperMan"), NinjaTrap("SuperMan") {
	this->_hit_points = FragTrap::_hit_points;
	this->_max_hit_point = FragTrap::_max_hit_point;
	this->_energy_point = NinjaTrap::_energy_point;
	this->_max_energy_point = NinjaTrap::_max_energy_point;
	this->_level = 1;
	this->_type = "SUP3R-TP";
	this->_melee_attack_damage = NinjaTrap::_melee_attack_damage;
	this->_ranged_attack_damage = FragTrap::_ranged_attack_damage;
	this->_armor_damage_reduction = FragTrap::_armor_damage_reduction;
	std::cout << this->_type << " " << this->_name << " was summoned." << std::endl;
}

SuperTrap::SuperTrap(const std::string name): ClapTrap(100, 100, 100, 100, 1, name, "SUP3R-TP " ,30, 20, 5) {
    std::cout << "SUP3R-TP " << this->_name << " was summoned." << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const & src) {
	*this = src;
    std::cout << "SUP3R-TP " << this->_name << " was summoned." << std::endl;
}

SuperTrap::~SuperTrap() {
    std::cout << "SUP3R-TP " << this->_name << " was destroyed." << std::endl;
}

SuperTrap&	SuperTrap::operator=(SuperTrap const & rhs) {
	if (this != &rhs) {
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
