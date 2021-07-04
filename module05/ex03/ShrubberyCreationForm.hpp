//
// -Created by lejulien @ 42-
//

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

class ShrubberyCreationForm: public Form
{
public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string const target);
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	~ShrubberyCreationForm(void);
	void execute(Bureaucrat const & executor) const;
	ShrubberyCreationForm &	operator=(ShrubberyCreationForm const & rhs);
	std::string const getTarget() const;
private:
	std::string _target;
};

#endif

// ----- by lejulien -----
