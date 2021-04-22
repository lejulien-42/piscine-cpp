/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 11:50:33 by lejulien          #+#    #+#             */
/*   Updated: 2021/01/27 12:24:24 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <string>
#pragma once

class
	Human
{
	private:
		const Brain *brain = new Brain();
	public:
		std::string	identifier();
		Brain		getBrain();
};
