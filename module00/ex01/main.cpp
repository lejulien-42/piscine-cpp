/*
 *
 *			MADE BY LEJULIRN
 *
 */

#include "contact.hpp"
#include <string>
#include <iostream>

void
	phone_welcome()
{
	std::cout << "|-----------------------------------------------|\n";
	std::cout << "|                                               |\n";
	std::cout << "|             Welcome to the Phonebook          |\n";
	std::cout << "|                                               |\n";
	std::cout << "|-----------------------------------------------|\n";
	std::cout << "|  -ADD    : Add a new contact                  |\n";
	std::cout << "|-----------------------------------------------|\n";
	std::cout << "|  -SEARCH : Search a contact                   |\n";
	std::cout << "|-----------------------------------------------|\n";
	std::cout << "|  -EXIT   : Close the Phonebook                |\n";
	std::cout << "|-----------------------------------------------|\n";
}

void
	print_add_menu()
{
	std::cout << "|-----------------------------------------------|\n";
	std::cout << "|             Please enter all fields           |\n";
	std::cout << "|-----------------------------------------------|\n";
}

void
	print_no_contact()
{
	std::cout << "|-----------------------------------------------|\n";
	std::cout << "|           No space left for new contacts      |\n";
	std::cout << "|-----------------------------------------------|\n";
	
}

std::string
	set_info(std::string str, int i)
{
	std::string	entry = "";
	while (entry == "")
	{
		std::cout << str << ">> ";
		getline(std::cin, entry);
	}
	return (entry);
}

void
	add_menu(Contact annuaire[8])
{
	int i = 0;
	while (annuaire[i].get_it() == 1)
		i++;
	if (i < 8)
	{
		print_add_menu();
		annuaire[i].set_val(set_info("First name\n", i), 0);
		annuaire[i].set_val(set_info("Last name\n", i), 1);
		annuaire[i].set_val(set_info("Nickname\n", i), 2);
		annuaire[i].set_val(set_info("Login\n", i), 3);
		annuaire[i].set_val(set_info("Postal address\n", i), 4);
		annuaire[i].set_val(set_info("Email address\n", i), 5);
		annuaire[i].set_val(set_info("Phone number\n", i), 6);
		annuaire[i].set_val(set_info("Birthday\n", i), 7);
		annuaire[i].set_val(set_info("Favorite meal\n", i), 8);
		annuaire[i].set_val(set_info("Underwear color\n", i), 9);
		annuaire[i].set_val(set_info("Darkest secret\n", i), 10);
		annuaire[i].set_it(1);
	}
	else
		print_no_contact();

}

int
	main()
{
	int		con_set = 0;
	Contact	annuaire[8];
	bool	is_exit = false;
	int		menu = 0;
	for (int i = 0; i < 8; i++)
		annuaire[i].set_it(0);

	while (!is_exit)
	{
		if (menu == 0)
			phone_welcome();
		std::string	typed;
		typed = "";
		getline(std::cin, typed);
		
		if (menu == 0)
		{
			if (typed.compare("EXIT") == 0)
			{
				std::cout << "Bye ^^\n";
				return (0);
			}
			if (typed.compare("ADD") == 0)
			{
				add_menu(annuaire);
				menu = 0;
			}
		}
	}
	return (0);
}
