//
//	Made by lejulien
//

#include "Span.hpp"
#include <iostream>
#include <exception>

int
	main()
{
	Span spa = Span(5);
	Span sp = Span(5);
	std::vector<int> vec;
	std::cout << "  --> Test with an overflow with iterator" << std::endl;
	for (int i = 0; i < 3; i++)
		vec.push_back(i * -20);
	try{
		spa.addNumber(10);
		spa.addNumber(10);
		spa.addNumber(10);
		spa.addNumber(10);
		spa.addNumber(10);
		std::cout << "now try iterator" << std::endl;
		spa.addNumber(vec.begin(), vec.end());
		std::cout << spa.longestSpan() << " " << spa.shortestSpan() << " " <<  std::endl;
	}
	catch(std::exception &e){
			std::cout << e.what() << std::endl;
	}

	std::cout << "  --> Test with an overflow with addNumber" << std::endl;
	try
	{
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(999999);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "  --> Test with a short span object" << std::endl;
	Span shorty = Span(1);

	shorty.addNumber(42);

	try
	{
		std::cout << shorty.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << shorty.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "  --> subject test" << std::endl;
	Span spb = Span(5);spb.addNumber(5);spb.addNumber(3);spb.addNumber(17);spb.addNumber(9);spb.addNumber(11);std::cout << spb.shortestSpan() << std::endl;std::cout << spb.longestSpan() << std::endl;
}
// Made by lejulien@42.fr
