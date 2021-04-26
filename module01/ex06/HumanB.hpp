//
// Created by Leo JULIEN on 4/26/21.
//

#ifndef CPP_HUMANB_HPP
#define CPP_HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanB {
private:
    std::string _name;
    Weapon      *_weapon;
public:
    HumanB(std::string name);
    void setWeapon(Weapon &weapon);
    void attack() const;
};


#endif //CPP_HUMANB_HPP
