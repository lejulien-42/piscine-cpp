/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <lejulien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 12:24:12 by lejulien          #+#    #+#             */
/*   Updated: 2021/01/25 12:24:21 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class	Pony
{
	public:
		Pony(std::string color);
		~Pony();
		void born() const;
		void eat() const;
		void run() const;
    private:
        std::string _color;
};
