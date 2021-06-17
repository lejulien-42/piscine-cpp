//
// -Created by lejulien @ 42-
//

// chars 「 」

#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(): ClapTrap(100, 100, 100, 100, 1, "CL4P-TR4P", "FR4G-TP", 30, 20, 5) {

}

FragTrap::FragTrap(const std::string name): ClapTrap(100, 100, 100, 100, 1, name, "FR4G-TP" ,30, 20, 5) {
    std::cout << "FR4G-TP " << this->_name << " was summoned." << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) {
	*this = src;
    std::cout << this->_type << " " << this->_name << " was summoned." << std::endl;
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

unsigned int FragTrap::vaulthunter_dot_exe(const std::string &target) {
    srand(time(0));
    const char *attaque[5] = {"en urinant un arc-en-ciel.「 Je suis le derrière d'une pandocorne. 」",
                              "en glissant sur la gachette.「 Deux balles avec un grand verre d'eau et ça ira mieux. 」",
                              "en roulant sur un tazer.「 Ça fait un choc, hein ? 」",
                              "en faisant tomber un lance-flame.「 Saisi à point. 」",
                              "sans savoir comment.「 La chance, c'est encore mieux que le talent. 」"};
    if (this->_energy_point >= 25){
        std::cout << this->_type << " " << this->_name << " attaque " << target << " " << attaque[std::rand() % 5] << std::endl;
        this->_energy_point -= 25;
        return (100);
    }
    else
        std::cout << this->_type << " " << this->_name << "「 Je suis a court de munitions. 」" << std::endl;
    return (0);
}
// ----- by lejulien -----
