/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 11:55:47 by lejulien          #+#    #+#             */
/*   Updated: 2021/01/27 12:23:59 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"
#include <string>
#include <sstream>

std::string
	Human::identifier()
{
	Brain *b = (Brain *)this->brain;
	Brain c = *b;
	return (c.identifier());
}

Brain
	Human::getBrain()
{
	return (*this->brain);
}
