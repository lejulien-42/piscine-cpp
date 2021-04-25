
//
// Created by Leo JULIEN on 4/25/21.
//

#ifndef CPP_WEAPON_HPP
#define CPP_WEAPON_HPP
#include <iostream>


class Weapon {
private:
    std::string _type;
public:
    const std::string&    getType() const;
    void                  setType(std::string type_str);
    Weapon(std::string type);
};


#endif //CPP_WEAPON_HPP
