//
// -Created by lejulien @ 42-
//

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

class RobotomyRequestForm: public Form
{
public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string const target);
	RobotomyRequestForm(RobotomyRequestForm const & src);
	~RobotomyRequestForm(void);
	void execute(Bureaucrat const & executor) const;
	RobotomyRequestForm &	operator=(RobotomyRequestForm const & rhs);
	std::string const getTarget() const;
private:
	std::string _target;
};

#endif

// ----- by lejulien -----
