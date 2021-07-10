//
//	Made by lejulien
//

#include "Array.hpp"
#include <iostream>
#include <exception>
#include <string>

void
	print_array_of_char(Array<char> &a, std::string name)
{
	std::cout << name << " contain : ";
	for (int i = 0; i < a.size(); i++)
		std::cout << " " << a[i];
	std::cout << std::endl;
}

void
	print_array_of_int(Array<int> &a, std::string name)
{
	std::cout << name << " contain : ";
	for (int i = 0; i < a.size(); i++)
		std::cout << " " << a[i];
	std::cout << std::endl;
}

int
	main()
{
	Array<int> a;
	Array<char> b(3);
	Array<char> c;
	Array<int> d(2);

	try {
		b[0] = 'l';
		b[1] = 'e';
		b[2] = '0';
		b[3] = '4';
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	print_array_of_char(b, "b");
	print_array_of_char(c, "c before assignation of b");
	c = b;
	print_array_of_char(c, "c after assignation of b");
	d[0] = 4;
	d[1] = 2;
	print_array_of_int(d, "d");
	Array<int> e(d);
	print_array_of_int(e, "constructed by copy d");

}

// Made by lejulien@42
