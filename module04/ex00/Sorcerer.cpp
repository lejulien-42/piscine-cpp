//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{}

Sorcerer::Sorcerer(std::string name, std::string title) : name(name), title(title)
{
	std::cout << this->name << " " << this->title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & src)
{
	std::cout << this->name << " " << this->title << ", is born!" << std::endl;
	this->name = src.getName();
	this->title = src.getTitle();
	*this = src;
	return ;
}

std::string	Sorcerer::getName()const{return (this->name);}
std::string	Sorcerer::getTitle()const{return (this->title);}

void	Sorcerer::introduce(void) const
{
	std::cout << "I am " << this->name << ", " << this->title << ", and I like ponies!" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be se same!" << std::endl;
}


Sorcerer&	Sorcerer::operator=(Sorcerer const & rhs)
{
	this->name = rhs.getName();
	this->title = rhs.getTitle();
	return *this;
}

void		Sorcerer::polymorph(Victim const &vic) const
{
	vic.getPolymorphed();
}

void		Sorcerer::polymorph(Peon const &peo) const
{
	peo.getPolymorphed();
}

void		Sorcerer::polymorph(Thief const &thi) const
{
	thi.getPolymorphed();
}

void		Sorcerer::polymorph(Shrek const &shr) const
{
	shr.getPolymorphed();
}

std::ostream& operator<<(std::ostream& os, const Sorcerer& fx)
{
	os << "I am " << fx.getName() << ", " << fx.getTitle() << ", and I like ponies!" << std::endl;
	return os;
}

// ----- by lejulien -----
