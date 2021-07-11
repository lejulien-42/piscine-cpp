//
//	Made by lejulien
//

#include <iostream>
#include "iter.hpp"
#include <string>
#include "cctype"

void
	add_two(int &i)
{
	i = i + 2;
}

void
	to_upper(char &c)
{
	c = c - 32;
}

int
	main()
{
	int integers[5] = { 1, 2, 3, 4, 5};

	std::cout << "this is the initiated array of ints :";
	iter(integers, 5, display);
	std::cout << std::endl;

	iter(integers, 5, add_two);

	std::cout << "this is the new array of ints :";
	iter(integers, 5, display);
	std::cout << std::endl << std::endl;

	char chars[3] = { 'j', 'p', 'p' };


	std::cout << "this is the initiated array of chars :";
	iter<char>(chars, 3, display);
	std::cout << std::endl;

	iter<char>(chars, 3, to_upper);

	std::cout << "this is the new array of chars :";
	iter<char>(chars, 3, display);
	std::cout << std::endl << std::endl;

	std::string	s[4] = {"aa", "bb", "cc", "dd"};
	iter<std::string>(s, 4, display);
}

//	Made by lejulien@42
