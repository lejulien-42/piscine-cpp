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
	std::cout << "This " << this->_color << " pony is dead\n";
}

Pony::Pony(std::string color): _color(color) {}

void Pony::born() const
{
	std::cout << "A new " << this->_color << " pony is born\n";
}

void Pony::eat() const
{
	std::cout << "The " << this->_color << " pony eat some weats\n";
}

void Pony::run() const
{
	std::cout << "Look at him go this " << this->_color << " pony is running so fast\n";
}
