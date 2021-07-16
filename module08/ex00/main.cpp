#include <iostream>
#include <vector>
#include <algorithm>
#include "easyfind.hpp"
#include <exception>
#include <list>

int
	main()
{
	// Create and fill the vector
	std::cout << "testing vectors" << std::endl << std::endl;
	std::vector<int> vector1;
	for (int i = 0; i < 4; i++)
		vector1.push_back(i);

	// Get the iterator
	try
	{
		for (int i = 0; i < 15; i++)
		{
			std::cout << "try " << i << std::endl;
			std::vector<int>::iterator ret = easyfind(vector1, i);
			std::cout << "this is the " << i << " value = " << *ret << std::endl;
		}
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::list<int> l;
	for (int i = 0; i < 4; i++)
		l.push_back(i);

	std::cout << std::endl << "testing list" << std::endl << std::endl;
	try
	{
		for(int i = 0; i < 15; i++)
		{
			std::cout << "try " << i << std::endl;
			std::list<int>::iterator ret = easyfind(l, i);
			std::cout << "this is the " << i << " value = " << *ret << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
