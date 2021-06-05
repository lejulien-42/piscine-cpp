//
// -Created by lejulien @ 42-
//

// chars 「 」

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): _hit_points(100), _max_hit_point(100), _energy_point(50),
_max_energy_point(50), _level(1), _name("SC4V-TR4P"), _melee_attack_damage(20),
_ranged_attack_damage(15), _armor_damage_reduction(3) {

}

ScavTrap::ScavTrap(const std::string name): _hit_points(100), _max_hit_point(100), _energy_point(50),
                                            _max_energy_point(50), _level(1), _name(name), _melee_attack_damage(20),
                                            _ranged_attack_damage(15), _armor_damage_reduction(3) {
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

void ScavTrap::beRepaired(unsigned int amount) {
    if (amount > 100)
        amount = 100;
    if (this->_hit_points + amount > this->_max_hit_point) {
        amount = 100 - this->_hit_points;
        std::cout << "SC4V-TP " << this->_name << " recupere " << amount << " HP. 「 Au moins, j'ai encore toutes mes dents. 」" << std::endl;
        this->_hit_points = 100;
    }
    else {
        std::cout << "SC4V-TP " << this->_name << " recupere " << amount << " HP. 「 Au moins, j'ai encore toutes mes dents. 」" << std::endl;
        this->_hit_points += amount;
    }
}

void ScavTrap::takeDamage(unsigned int amount) {
    if (amount != 0 && this->_hit_points != 0){
        if (this->_hit_points  > (amount - this->_armor_damage_reduction)) {
            std::cout << "SC4V-TP " << this->_name << " perd " << amount - this->_armor_damage_reduction << " HP." << std::endl;
            this->_hit_points -= (amount - this->_armor_damage_reduction);
        }
        else {
            std::cout << "SC4V-TP " << this->_name << " meurt dans des bruits de circuits imprimes cramer." << std::endl;
            this->_hit_points = 0;
        }
    }
    else if (amount != 0)
    {
        std::cout << "SC4V-TP " << this->_name << " est deja 6 pieds sous terre." << std::endl;
    }
}

unsigned int ScavTrap::rangedAttack(const std::string &target) {
    std::cout << "SC4V-TP " << this->_name << " attaque " << target << " a distance, causant " << this->_ranged_attack_damage << " point de degats !" << std::endl;
    return (this->_ranged_attack_damage);
}

unsigned int ScavTrap::meleeAttack(const std::string &target) {
    std::cout << "SC4V-TP " << this->_name << " attaque de front " << target << ", causant " << this->_melee_attack_damage << " point de degats !" << std::endl;
    return (this->_melee_attack_damage);
}

// ----- by lejulien -----
