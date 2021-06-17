//
// -Created by lejulien @ 42-
//

// chars 「 」

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(): _hit_points(100), _max_hit_point(100), _energy_point(100),
_max_energy_point(100), _level(1), _name("CL4P-TR4P"), _melee_attack_damage(30),
_ranged_attack_damage(20), _armor_damage_reduction(5) {

}

FragTrap::FragTrap(const std::string name): _hit_points(100), _max_hit_point(100), _energy_point(100),
                                            _max_energy_point(100), _level(1), _name(name), _melee_attack_damage(30),
                                            _ranged_attack_damage(20), _armor_damage_reduction(5) {
    std::cout << "FR4G-TP " << this->_name << " was summoned." << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) {
	*this = src;
    std::cout << "FR4G-TP " << this->_name << " was summoned." << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FR4G-TP " << this->_name << " was destroyed." << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const & rhs) {
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

void FragTrap::beRepaired(unsigned int amount) {
    if (this->_hit_points + amount > this->_max_hit_point) {
        std::cout << "FR4G-TP " << this->_name << " recupere " << amount << " HP. 「 Au moins, j'ai encore toutes mes dents. 」" << std::endl;
        this->_hit_points = this->_max_hit_point;
    }
    else {
        std::cout << "FR4G-TP " << this->_name << " recupere " << amount << " HP. 「 Au moins, j'ai encore toutes mes dents. 」" << std::endl;
        this->_hit_points += amount;
    }
}

void FragTrap::takeDamage(unsigned int amount) {
    if (amount != 0 && this->_hit_points != 0){
        if (this->_hit_points  > (amount - this->_armor_damage_reduction)) {
            std::cout << "FR4G-TP " << this->_name << " perd " << amount - this->_armor_damage_reduction << " HP." << std::endl;
            this->_hit_points -= (amount - this->_armor_damage_reduction);
        }
        else {
            std::cout << "FR4G-TP " << this->_name << " meurt dans des bruits de circuits imprimes cramer." << std::endl;
            this->_hit_points = 0;
        }
    }
    else if (amount != 0)
    {
        std::cout << "FR4G-TP " << this->_name << " est deja 6 pieds sous terre." << std::endl;
    }
}

unsigned int FragTrap::vaulthunter_dot_exe(const std::string &target) {
    srand(time(0));
    const char *attaque[5] = {"en urinant un arc-en-ciel.「 Je suis le derrière d'une pandocorne. 」",
                              "en glissant sur la gachette.「 Deux balles avec un grand verre d'eau et ça ira mieux. 」",
                              "en roulant sur un tazer.「 Ça fait un choc, hein ? 」",
                              "en faisant tomber un lance-flame.「 Saisi à point. 」",
                              "sans savoir comment.「 La chance, c'est encore mieux que le talent. 」"};
    if (this->_energy_point >= 25){
        std::cout << "FR4G-TP " << this->_name << " attaque " << target << " " << attaque[std::rand() % 5] << std::endl;
        this->_energy_point -= 25;
        return (100);
    }
    else
        std::cout << "FR4G-TP " << this->_name << "「 Je suis a court de munitions. 」" << std::endl;
    return (0);
}

unsigned int FragTrap::rangedAttack(const std::string &target) {
    std::cout << "FR4G-TP " << this->_name << " attaque " << target << " a distance, causant " << this->_ranged_attack_damage << " point de degats !" << std::endl;
    return (this->_ranged_attack_damage);
}

unsigned int FragTrap::meleeAttack(const std::string &target) {
    std::cout << "FR4G-TP " << this->_name << " attaque de front " << target << ", causant " << this->_melee_attack_damage << " point de degats !" << std::endl;
    return (this->_melee_attack_damage);
}

// ----- by lejulien -----
