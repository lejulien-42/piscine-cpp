/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <lejulien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 04:36:42 by lejulien          #+#    #+#             */
/*   Updated: 2021/06/23 04:58:11 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIALSOURCE_HPP
# define IMATERIALSOURCE_HPP
# include <string>
# include "AMateria.hpp"

class IMateriaSource
{
	public:
	   virtual ~IMateriaSource() {}
	   virtual void learnMateria(AMateria *) = 0;
	   virtual AMateria *createMateria(std::string const & type) = 0;
};

#endif
