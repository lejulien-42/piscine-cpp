/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 10:55:55 by lejulien          #+#    #+#             */
/*   Updated: 2021/04/29 14:19:58 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <sstream>
#include "Brain.hpp"

std::string
	Brain::identify() const
{
    std::ostringstream res;
    res << (void const *)this;
	return (res.str());
}