//
//	Made by lejulien
//

#include "whatever.hpp"
#include <iostream>

int
	main()
{
	int a = 5;
	int b = 2;

	std::cout << "min = " << min(a, b) << std::endl;
	std::cout << "max = " << max(a, b) << std::endl;
	std::cout << "before swap a = " << a << " | b = " << b << std::endl;
	swap(a, b);
	std::cout << "after swap a = " << a << " | b = " << b << std::endl;
	
}

//	Made by lejulien@42
