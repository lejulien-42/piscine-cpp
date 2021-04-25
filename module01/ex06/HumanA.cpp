//
// Created by lejulien on 25/04/2021.
//

#include "HumanA.hpp"

void    HumanA::attack() const {
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon){}