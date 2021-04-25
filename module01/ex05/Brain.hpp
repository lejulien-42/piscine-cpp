/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 10:54:14 by lejulien          #+#    #+#             */
/*   Updated: 2021/01/27 12:15:46 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#pragma once

class
	Brain
{
    private:
        std::string _address = std::this;
	public:
        Brain();
		std::string identifier();
};
