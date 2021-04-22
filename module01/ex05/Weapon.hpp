/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <lejulien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 07:54:57 by lejulien          #+#    #+#             */
/*   Updated: 2021/01/25 07:56:53 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

std::string
	Weapon::getType()
{
	return (this->type);
}

void
	Weapon::setType(std::string type)
{
	this->type = type;
}
