//
// Created by lejulien on 30/04/2021.
//

#include "FragTrap.hpp"

int main( void )
{
    FragTrap    billy("billy");
    FragTrap    billy2(billy);
    FragTrap    bob("bob");

    bob.takeDamage(billy.rangedAttack("bob"));
    bob.takeDamage(billy.meleeAttack("bob"));
    bob.takeDamage(billy.rangedAttack("bob"));
    bob.takeDamage(billy.meleeAttack("bob"));
    bob.takeDamage(billy.rangedAttack("bob"));
    bob.takeDamage(billy.meleeAttack("bob"));
    bob.takeDamage(billy.rangedAttack("bob"));
    bob.beRepaired(200);
    bob.takeDamage(billy.rangedAttack("bob"));
    bob.beRepaired(200);
    bob.takeDamage(billy.vaulthunter_dot_exe("bob"));
    bob.takeDamage(billy.rangedAttack("bob"));
    return (0);
}