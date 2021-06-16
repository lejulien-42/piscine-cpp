/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:57:10 by lejulien          #+#    #+#             */
/*   Updated: 2021/06/16 17:29:46 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "SuperMutant.hpp"

int
	main()
{
	Character* me = new Character("me");

	std::cout << *me;

	Enemy *b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

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
	return 0;
}
