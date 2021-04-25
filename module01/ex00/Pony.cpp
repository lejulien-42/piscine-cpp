/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <lejulien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 12:23:45 by lejulien          #+#    #+#             */
/*   Updated: 2021/01/25 12:24:05 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::~Pony()
{
	std::cout << "This pony is dead\n";
}

void Pony::born() const
{
	std::cout << "A new pony is born\n";
}

void Pony::eat() const
{
	std::cout << "The pony eat some weats\n";
}

void Pony::run() const
{
	std::cout << "Look at him go this pony is running so fast\n";
}
