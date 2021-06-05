//
// -Created by lejulien @ 42-
//

// chars 「 」

#include <iostream>
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

NinjaTrap::NinjaTrap(): ClapTrap(60, 60, 120, 120, 1, "CL4P-TR4P", "N1NJ4-TP", 60, 5, 0) {

}

NinjaTrap::NinjaTrap(const std::string name): ClapTrap(60, 60, 120, 120, 1, name, "N1NJ4-TP", 60, 5, 0) {
    std::cout << "N1NJ4-TP " << this->_name << " was summoned." << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) {
	*this = src;
    std::cout << "N1NJ4-TP " << this->_name << " was summoned." << std::endl;
}

NinjaTrap::~NinjaTrap() {
    std::cout << "N1NJ4-TP " << this->_name << " was destroyed." << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap &cible)
{
	std::cout << this->_type << " " << this->_name << " attaque " << cible.get_name() << " lui affligeant " << 50 << " dommages 「prend ca bondinet. 」" << std::endl;
	cible.takeDamage(50);
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &cible)
{
	std::cout << this->_type << " " << this->_name << " attaque " << cible.get_name() << " lui affligeant " << 25 << " dommages 「Tu l'as cherche mon frere. 」" << std::endl;
	cible.takeDamage(25);
}

void	NinjaTrap::ninjaShoebox(FragTrap &cible)
{
	std::cout << this->_type << " " << this->_name << " attaque " << cible.get_name() << " lui affligeant " << 20 << " dommages 「Tes blagues finirons par te tuer. 」" << std::endl;
	cible.takeDamage(20);
}

void	NinjaTrap::ninjaShoebox(ScavTrap &cible)
{
	std::cout << this->_type << " " << this->_name << " attaque " << cible.get_name() << " lui affligeant " << 70 << " dommages 「Ne t'avise plus de me donner un defi. 」" << std::endl;
	cible.takeDamage(70);
}

NinjaTrap&	NinjaTrap::operator=(NinjaTrap const & rhs) {
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
