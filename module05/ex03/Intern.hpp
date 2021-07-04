//
// -Created by lejulien @ 42-
//

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern(void);
	Intern(Intern const & src);

	Form *makeForm(std::string const name, std::string const target);
	~Intern(void);
	Intern &	operator=(Intern const & rhs);
};

struct _TYPE
{
	std::string type;
	Form *(*create)(std::string);
};

#endif

// ----- by lejulien -----
