/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:57:10 by lejulien          #+#    #+#             */
/*   Updated: 2021/06/15 18:45:15 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"

int
	main()
{
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	Enemy *b = new RadScorpion();

	pr->attack();
	pf->attack();
	b->takeDamage(64);
	b->takeDamage(64);
	return 0;
}
