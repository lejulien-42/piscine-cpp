/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <lejulien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 04:39:57 by lejulien          #+#    #+#             */
/*   Updated: 2021/06/23 05:01:22 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"

class AMateria
{
	protected:
		unsigned int _xp;
		std::string	_type;

	public:
		AMateria(std::string const type);
		virtual ~AMateria();
		
		std::string const & getType() const;
		unsigned int getXP() const;

		virtual AMateria *clone()const = 0;
		virtual void use(ICharacter &target);
};

#endif
