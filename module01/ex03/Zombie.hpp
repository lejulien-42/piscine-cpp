
#pragma once
#include <iostream>

class
	Zombie
{
	private:
		std::string	_name;
		std::string	_type;

	public:
		Zombie(std::string name, std::string type);
		Zombie();
		~Zombie();
		void	advert() const;
		void	announce() const;
		void	SetName(std::string name);
		void	SetType(std::string type);
};
