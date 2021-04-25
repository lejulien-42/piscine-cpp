//
// Created by Leo JULIEN on 4/25/21.
//

#include <iostream>
#include "Weapon.hpp"

int main()
{
    Weapon p;

    p.setType("Fire tazer");
    std::cout << "The weapon type is " << p.getType() << std::endl;
    return 0;
}