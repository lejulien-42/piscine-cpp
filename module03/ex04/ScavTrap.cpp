//
// -Created by lejulien @ 42-
//

// chars 「 」

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(100, 100, 50, 50, 1, "SC4V-TR4P", "SC4V-TP", 20, 15, 3) {

}

ScavTrap::ScavTrap(const std::string name): ClapTrap(100, 100, 50, 50, 1, name, "SC4V-TP", 20, 15, 3) {
    std::cout << "SC4V-TP " << this->_name << " was summoned." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) {
	*this = src;
    std::cout << "SC4V-TP " << this->_name << " was summoned." << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "SC4V-TP " << this->_name << " was destroyed." << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const & rhs) {
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

void ScavTrap::challengeNewcomer(const std::string &target) {
    srand(time(0));
    const char *challenges[4] = {" au pierre feuille ciseaux.",
                                 " a la roulette russe.",
                                 " a la corde a sauter.",
                                 " au uno"};
    std::cout << "SC4V-TP " << this->_name << " defie " << target << challenges[std::rand() % 4] << std::endl;
}

// ----- by lejulien -----
