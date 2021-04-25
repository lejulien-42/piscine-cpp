//
// Created by Leo JULIEN on 4/25/21.
//

#include "Weapon.hpp"
#include <iostream>

const std::string&  Weapon::getType() const {
    return (this->_type);
}

void Weapon::setType(std::string type_str) {
    this->_type = type_str;
}

Weapon::Weapon(std::string type) : _type(type){}