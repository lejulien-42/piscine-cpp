/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <lejulien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 14:20:20 by lejulien          #+#    #+#             */
/*   Updated: 2021/01/25 14:46:38 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int
	main()
{
	std::string s = "HI THIS IS BRAIN";

	std::string *ptr = &s;

	std::string &reff = s;

	std::cout << "string from ptr : " << *ptr << std::endl << "string from reference : " << reff << std::endl;
}
