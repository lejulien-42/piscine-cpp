//
// Created by lejulien on 25/04/2021.
//

#ifndef CPP_HUMANA_HPP
#define CPP_HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"


class HumanA {
private:
    std::string _name;
    Weapon&      _weapon;
public:
    void attack() const;
    HumanA(std::string name, Weapon& weapon);
};


#endif //CPP_HUMANA_HPP
