/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 19:10:50 by user42            #+#    #+#             */
/*   Updated: 2021/06/23 04:25:00 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"
#include "AssaultTerminator.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad *vlc = new Squad;
	ISquad *vlc2 = new Squad;

	vlc->push(jim);
	vlc->push(bob);
	vlc2->push(jim->clone());
	vlc2->push(jim->clone());
	vlc2->push(bob->clone());

	std::cout << std::endl << " From vlc" << std::endl << std::endl;

	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << std::endl << " From vlc2" << std::endl << std::endl;
	for (int i = 0; i < vlc2->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc2->getUnit(i);
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	delete vlc2;
	return 0;
}
