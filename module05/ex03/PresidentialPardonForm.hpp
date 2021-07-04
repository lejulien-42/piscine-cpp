//
// -Created by lejulien @ 42-
//

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

class PresidentialPardonForm: public Form
{
public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string const target);
	PresidentialPardonForm(PresidentialPardonForm const & src);
	~PresidentialPardonForm(void);
	void execute(Bureaucrat const & executor) const;
	PresidentialPardonForm &	operator=(PresidentialPardonForm const & rhs);
	std::string const getTarget() const;
private:
	std::string _target;
};

#endif

// ----- by lejulien -----
