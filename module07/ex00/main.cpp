//
//	Made by lejulien
//

#include "whatever.hpp"
#include <iostream>
#include <string>

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
	
	std::cout << std::endl << "test on strings" << std::endl << std::endl;

	std::string c("3");
	std::string d("4");
	
	std::cout << "min = " << min(c, d) << std::endl;
	std::cout << "max = " << max(c, d) << std::endl;
	std::cout << "before swap c = " << c << " | d = " << d << std::endl;
	swap(c, d);
	std::cout << "after swap a = " << c << " | b = " << d << std::endl;

	return 0;
}

//	Made by lejulien@42
