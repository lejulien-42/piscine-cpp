/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 10:55:55 by lejulien          #+#    #+#             */
/*   Updated: 2021/01/27 12:16:18 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <sstream>
#include "Brain.hpp"

std::string
	Brain::identifier()
{
	std::stringstream	ss;
	ss << this;
	return (ss.str());
}
