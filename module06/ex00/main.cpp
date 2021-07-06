//
// Made by lejulien
//

#include <iostream>
#include <string>
#include <math.h>

void print_char(char c, int i)
{
	if (i >= 32 && i <= 126)
		std::cout << "char: '" << c << "'" << std::endl;
	else
	{
		if (i >= 0 && i <= 127)
			std::cout << "char: non displayable" << std::endl;
		else
			std::cout << "char: impossible" << std::endl;
	}
}

void print_int(int i, float f, char **av)
{
	i = atoi(av[1]);
	if (f == atof("inf") || f == atof("-inf") || f != f || (av[1][0] == '-' && i > 0) || (av[1][0] != '-' && i < 0))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
}

void print_float(float f)
{
	int i = static_cast<int>(f);
	if (f == i)
		std::cout << "float: " << f << ".0f" << std::endl;
	else
		std::cout << "float: " << f << "f" << std::endl;
}


void print_double(double d)
{
	int i = static_cast<int>(d);
	if (d == i)
		std::cout << "double: " << d << ".0" << std::endl;
	else
		std::cout << "double: " << d << std::endl;
}

int
	print_error()
{
	std::cout << "usage : ./convert <string>" << std::endl;
	return 1;	
}

int
	check_num(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != 46 && str[i] != 102)
		{
			if (str[i] < '0' || str[i] > '9')
				return (1);
		}
		i++;
	}
	return (0);
}

int
	is_printable(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (1);
		i++;
	}
	return (0);
}

int
	main(int ac, char **av)
{
	if (ac != 2)
		return print_error();
	float f = atof(av[1]);

	// Get values
	char c = static_cast<char>(f);
	double d = static_cast<double>(f);
	int i = static_cast<int>(f);

	// Error Case
	if (av[1][0] == '\0')
		return print_error();
	std::string test = std::string(av[1]);
	if (test.length() == 1)
	{
		if (is_printable(av[1]))
			return print_error();
	}
	else
	{
		if (check_num(av[1]))
			return print_error();
	}
	// Write value
	print_char(c, i);
	print_int(i, f, av);
	print_float(f);
	print_double(d);
	return 0;
}
