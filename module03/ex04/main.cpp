//
// Created by lejulien on 30/04/2021.
//

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main( void )
{
	SuperTrap superman = SuperTrap("SuperMan");
	ScavTrap bob = ScavTrap("bob");

    bob.challengeNewcomer("SuperMan");
	superman.ninjaShoebox(bob);
	superman.takeDamage(bob.meleeAttack("SuperMan"));
	bob.takeDamage(superman.vaulthunter_dot_exe("bob"));
    return (0);
}
