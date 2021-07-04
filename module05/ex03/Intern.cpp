//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "Intern.hpp"

// Constructors and destructor

Intern::Intern(void)
{}

Intern::Intern(Intern const & src)
{
	*this = src;
	return ;
}

Intern::~Intern(void)
{}

// Funtions

Form *makeShrubberyCreationForm(std::string const target)
{
	std::cout << "Intern creates ShrubberyCreationForm." << std::endl;
	return new ShrubberyCreationForm(target);
}

Form *makeRobotomyRequestForm(std::string const target)
{
	std::cout << "Intern creates RobotomyRequestForm." << std::endl;
	return new RobotomyRequestForm(target);
}

Form *makePresidentialPardonForm(std::string const target)
{
	std::cout << "Intern creates PresidentialPardonForm." << std::endl;
	return new PresidentialPardonForm(target);
}


Form	*Intern::makeForm(std::string const name, std::string const target)
{
	static struct _TYPE type[3] = {	{ "shrubbery creation", makeShrubberyCreationForm },
									{ "robotomy request" , makeRobotomyRequestForm },
								 	{ "presidential pardon", makePresidentialPardonForm }
	};
	for (int i = 0;  i < 3; i++)
	{
		if (type[i].type == name)
			return (type[i].create(target));
	}
	std::cout << "Form " << name << " doesn't exist." << std::endl;
	return (NULL);
}

// Overloads

Intern&	Intern::operator=(Intern const & rhs)
{
	if (this != &rhs)
		return *this;
	return *this;
}

// ----- by lejulien -----
