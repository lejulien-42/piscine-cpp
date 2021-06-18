/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:57:10 by lejulien          #+#    #+#             */
/*   Updated: 2021/06/18 04:53:07 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "SuperMutant.hpp"
#include "FlySwatter.hpp"
#include "MutantFly.hpp"
#include "ChuckNoris.hpp"
#include "ThorsHammer.hpp"

int
	main()
{
	Character* me = new Character("me");

	std::cout << *me;

	Enemy *b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	AWeapon* fs = new FlySwatter();
	AWeapon* th = new ThorsHammer();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	std::cout << std::endl << "More tests with super mutant" << std::endl;
	Enemy	*a = new SuperMutant();
	me->recoverAP();
	std::cout << *me;
	me->attack(a);
	std::cout << *me;
	me->attack(a);
	std::cout << *me;
	me->attack(a);
	std::cout << *me;
	me->attack(a);
	std::cout << *me;
	me->attack(a);
	std::cout << *me;
	me->attack(a);
	std::cout << *me;
	me->attack(a);
	std::cout << *me;
	me->recoverAP();
	me->recoverAP();
	me->equip(pf);
	std::cout << *me;
	me->attack(a);
	me->equip(fs);
	std::cout << *me;
	me->attack(a);

	std::cout << std::endl << "Now with customs one" << std::endl;
	Enemy *c = new MutantFly();
	std::cout << *me;
	me->attack(c);
	std::cout << *me;

	Enemy *d = new ChuckNoris();
	me->equip(th);
	std::cout << *me;
	me->attack(d);
	std::cout << *me;
	return 0;
}
