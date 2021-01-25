
#pragma once
#include <iostream>

class
	Zombie
{
	private:
		std::string	name;
		std::string	type;

	public:
		Zombie(std::string name, std::string type);
		Zombie();
		void	advert();
		void	announce();
		void	SetName(std::string name);
		void	SetType(std::string type);
};
