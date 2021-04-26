//
// Created by Leo JULIEN on 4/26/21.
//

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL) {}

void HumanB::setWeapon(Weapon &weapon) {
    this->_weapon = &weapon;
}

void HumanB::attack() const {
    std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}
