/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 11:43:35 by lejulien          #+#    #+#             */
/*   Updated: 2021/01/27 12:05:06 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"
#include <iostream>

int
	main()
{
	Human	billy;

	std::cout << billy.identifier() << std::endl;
	std::cout << billy.getBrain().identifier() << std::endl;
}
