/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <lejulien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 12:22:10 by lejulien          #+#    #+#             */
/*   Updated: 2021/01/25 12:22:55 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void
	ponyOnTheStack()
{
	std::cout << "This is the pony on the stack :\n";
	Pony	p(std::string("white"));
	p.born();
	p.eat();
}

void
	ponyOnTheHeap()
{
	std::cout << "This is the pony on the heap :\n";
	Pony	*p = new Pony(std::string("brown"));
	p->born();
	p->run();
	delete p;
}

int
	main()
{
	ponyOnTheStack();
	std::cout << std::endl;
	ponyOnTheHeap();
	return (0);
}
