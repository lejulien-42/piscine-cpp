//
// Created by Leo JULIEN on 4/25/21.
//

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");

        HumanA  bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    return 0;
}