/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <lejulien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 12:18:37 by lejulien          #+#    #+#             */
/*   Updated: 2021/01/25 12:19:16 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void
	print_info(std::string str)
{
	if (str.length() == 10)
		std::cout << str;
	if (str.length() < 10)
	{
		int space = 10 - str.length();
		while (space > 0)
		{
			std::cout << " ";
			space--;
		}
		std::cout << str;
	}
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << ".";
	std::cout << "|";
}

void
	print_line(std::string name, std::string info)
{
	int i = 3 + name.length() + info.length();
	std::cout << "  |" << name << "|";
	if (i < 45)
	{
		int	space = 45 - i;
		while (space > 0)
		{
			std::cout << " ";
			space--;
		}
		std::cout << info;
	}
	if (i > 45)
		std::cout << info.substr(0, 44 - (3 + name.length())) << ".";
	if (i == 45)
		std::cout << info;
	std::cout << "|\n  |-------------------------------------------|\n";
}

int
	isdigit(std::string str)
{
	int i = 0;
	while (i < str.length())
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

void
	search_menu(Contact annuaire[8])
{
	std::cout << "  |----------|----------|----------|----------|\n";
	std::cout << "  |    id    |First name|Last  name|   login  |\n";
	std::cout << "  |----------|----------|----------|----------|\n";
	int i = 0;
	while (annuaire[i].get_it() == 1)
	{
		std::cout << "  |         " << i << "|";
		print_info(annuaire[i].get_val(0));
		print_info(annuaire[i].get_val(1));
		print_info(annuaire[i].get_val(3));
		std::cout << "\n";
		std::cout << "  |----------|----------|----------|----------|\n";
		i++;
	}
	if (i == 0)
	{
		std::cout << "  |              No contact found             |\n";
		std::cout << "  |-------------------------------------------|\n";
		return ;
	}
	int		entry = -1;
	std::string	entry_str = "";
	while (entry < 0 || entry > i - 1)
	{
		std::cout << "Which contact you want to see ? [id]\n>> ";
		entry_str = "";
		getline(std::cin, entry_str);
		if (entry_str.length() > 0)
		{
			if (isdigit(entry_str) != 0 && entry_str.length() < 3)
				entry = std::stoi(entry_str);
		}
	}
	std::cout << "  |-------------------------------------------|\n";
	print_line("Fist name", annuaire[entry].get_val(0));
	print_line("Last name", annuaire[entry].get_val(1));
	print_line("Nickname", annuaire[entry].get_val(2));
	print_line("Login", annuaire[entry].get_val(3));
	print_line("Postal addr.", annuaire[entry].get_val(4));
	print_line("Email addr.", annuaire[entry].get_val(5));
	print_line("Phone nbr.", annuaire[entry].get_val(6));
	print_line("Birthdate", annuaire[entry].get_val(7));
	print_line("Fav. meal", annuaire[entry].get_val(8));
	print_line("Underwear color", annuaire[entry].get_val(9));
	print_line("Darkest secret", annuaire[entry].get_val(10));
}

int
	main()
{
	int		con_set = 0;
	Contact	annuaire[8];
	bool	is_exit = false;

	for (int i = 0; i < 8; i++)
		annuaire[i].set_it(0);

	while (!is_exit)
	{
		phone_welcome();
		std::cout << ">> ";
		std::string	typed;
		typed = "";
		getline(std::cin, typed);
		
		if (typed.compare("EXIT") == 0)
		{
			std::cout << "Bye ^^\n";
			return (0);
		}
		if (typed.compare("ADD") == 0)
			add_menu(annuaire);
		if (typed.compare("SEARCH") == 0)
			search_menu(annuaire);
	}
	return (0);
}
