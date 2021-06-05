//
// Created by lejulien on 30/04/2021.
//

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main( void )
{
    FragTrap    billy("billy");
    FragTrap    billy2(billy);
    ScavTrap    bob("bob");
	NinjaTrap	ninj("Nino");
	NinjaTrap	bull("Bully");

    bob.challengeNewcomer("Nino");
	ninj.ninjaShoebox(bob);
	ninj.takeDamage(billy.meleeAttack("Nino"));
	ninj.ninjaShoebox(billy);
	ninj.ninjaShoebox(bull);
    return (0);
}
