/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 02:55:46 by lejulien          #+#    #+#             */
/*   Updated: 2021/06/15 03:43:06 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <string>

class AWeapon
{
	protected:
		std::string _name;
		int					_apcost;
		int					_damage;
	public:
		AWeapon(std::string const &name, int apcost, int damage);
		virtual ~AWeapon();
		AWeapon			&operator=(const AWeapon& op);
		std::string		getName() const;
		int				getAPCost() const;
		int				getDamage() const;
		virtual void	attack() const = 0;
};

#endif
