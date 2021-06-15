/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 03:15:12 by lejulien          #+#    #+#             */
/*   Updated: 2021/06/15 03:54:46 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage): _name(name), _apcost(apcost), _damage(damage) {}

AWeapon::~AWeapon() {}

std::string AWeapon::getName() const
{
	return this->_name;
}

int	AWeapon::getAPCost() const
{
	return this->_apcost;
}

int	AWeapon::getDamage() const
{
	return this->_damage;
}

AWeapon &AWeapon::operator=(const AWeapon &rhs)
{
	if (this == &rhs)
		return (*this);
	this->_name = rhs.getName();
	this->_apcost = rhs.getAPCost();
	this->_damage = rhs.getDamage();
	return *this;
}
