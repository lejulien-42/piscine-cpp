/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <lejulien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 12:27:54 by lejulien          #+#    #+#             */
/*   Updated: 2021/01/25 12:27:56 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#pragma once

class
	ZombieEvent
{
	private:
		std::string	_type;

	public:
        ZombieEvent();
		void	setZombieType(std::string type);
		Zombie	*newZombie(std::string name);
};
