/*
 *
 *			MADE BY LEJULIRN
 *
 */

#include "contact.hpp"
#include <string>
#include <iostream>

int
	main()
{
	int		con_set = 0;
	Contact	annuaire[8];
	bool	is_exit = false;
	int		menu = 0;

	while (!is_exit)
	{
		std::string	typed;
		getline(std::cin, typed);

		if (menu == 0)
		{
			if (typed.compare("EXIT"))
				std::cout << "ok" << std::endl;
		}
	}
	return (0);
}
