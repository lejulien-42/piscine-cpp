//
// Made by lejulien
//

#include <iostream>
#include <string>

int
	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "usage : ./convert <string>";
		return (1);
	}
	std::string::size_type sz;
	float input = std::stof(av[1], &sz);
	std::cout << "you input this : " << input << std::endl;
}
