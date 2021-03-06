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

ClapTrap::ClapTrap(unsigned int hit_point, unsigned int max_hit_point, unsigned int energy_point, unsigned int max_energy_point,
                   unsigned int level, std::string name, std::string type, unsigned int melee_attack_damage, unsigned int ranged_attack_damage,
                   unsigned int armor_damage_reduction): _hit_points(hit_point), _max_hit_point(max_hit_point), _energy_point(energy_point),
                                            _max_energy_point(max_energy_point), _level(level), _name(name), _type(type), _melee_attack_damage(melee_attack_damage),
                                            _ranged_attack_damage(ranged_attack_damage), _armor_damage_reduction(armor_damage_reduction) {
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	*this = src;
}

ClapTrap::~ClapTrap() {

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

std::string	ClapTrap::get_name() {
	return this->_name;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_hit_points + amount > this->_max_hit_point) {
        std::cout << this->_type << " " << this->_name << " recupere " << amount << " HP. 「 Au moins, j'ai encore toutes mes dents. 」" << std::endl;
        this->_hit_points = this->_max_hit_point;
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
        std::cout << this->_type << " " << this->_name << " est deja 6 pieds sous terre." << std::endl;
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
