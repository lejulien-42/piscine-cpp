//
// -Created by lejulien @ 42-
//

// chars 「 」

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _hit_points(100), _max_hit_point(100), _energy_point(100),
_max_energy_point(100), _level(1), _name("CL4P-TR4P"), _type("CL4P-TP"), _melee_attack_damage(30),
_ranged_attack_damage(20), _armor_damage_reduction(5) {

}

ClapTrap::ClapTrap(const std::string name): _hit_points(100), _max_hit_point(100), _energy_point(100),
                                            _max_energy_point(100), _level(1), _name(name), _type("CL4P-TP"), _melee_attack_damage(30),
                                            _ranged_attack_damage(20), _armor_damage_reduction(5) {
    std::cout << this->_type << " " << this->_name << " was summoned." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	*this = src;
    std::cout << this->_type << " " << this->_name << " was summoned." << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << this->_type << " " << this->_name << " was destroyed." << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const & rhs) {
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

void ClapTrap::beRepaired(unsigned int amount) {
    if (amount > 100)
        amount = 100;
    if (this->_hit_points + amount > this->_max_hit_point) {
        amount = 100 - this->_hit_points;
        std::cout << this->_type << " " << this->_name << " recupere " << amount << " HP. 「 Au moins, j'ai encore toutes mes dents. 」" << std::endl;
        this->_hit_points = 100;
    }
    else {
        std::cout << this->_type << " " << this->_name << " recupere " << amount << " HP. 「 Au moins, j'ai encore toutes mes dents. 」" << std::endl;
        this->_hit_points += amount;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (amount != 0 && this->_hit_points != 0){
        if (this->_hit_points  > (amount - this->_armor_damage_reduction)) {
            std::cout << this->_type << " " << this->_name << " perd " << amount - this->_armor_damage_reduction << " HP." << std::endl;
            this->_hit_points -= (amount - this->_armor_damage_reduction);
        }
        else {
            std::cout << this->_type << " " << this->_name << " meurt dans des bruits de circuits imprimes cramer." << std::endl;
            this->_hit_points = 0;
        }
    }
    else if (amount != 0)
    {
        std::cout << this->type << " " << this->_name << " est deja 6 pieds sous terre." << std::endl;
    }
}

unsigned int ClapTrap::rangedAttack(const std::string &target) {
    std::cout << this->_type << " " << this->_name << " attaque " << target << " a distance, causant " << this->_ranged_attack_damage << " point de degats !" << std::endl;
    return (this->_ranged_attack_damage);
}

unsigned int ClapTrap::meleeAttack(const std::string &target) {
    std::cout << this->_type << " " << this->_name << " attaque de front " << target << ", causant " << this->_melee_attack_damage << " point de degats !" << std::endl;
    return (this->_melee_attack_damage);
}

// ----- by lejulien -----
