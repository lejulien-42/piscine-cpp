#include <iostream>
#include <vector>
#include <algorithm>
#include "easyfind.hpp"

int
	main()
{
	// Create and fill the vector
	
	std::vector<int> vector1;
	for (int i = 1; i <= 10; i++)
		vector1.push_back(i);

	// Get the iterator
	
	std::vector<int>::iterator ret = easyfind(vector1, 3);

	return 0;
}
