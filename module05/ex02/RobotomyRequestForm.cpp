//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "RobotomyRequestForm.hpp"
#include <string>

// Constructors and destructor

RobotomyRequestForm::RobotomyRequestForm(void):Form("RobotomyRequestForm", 72, 45), _target("random") {}

RobotomyRequestForm::RobotomyRequestForm(std::string const target):Form("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src): Form("RobotomyRequestForm", 72, 45)
{
	this->_target = src.getTarget();
	return ;
}

// Functions

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned())
		this->throwAllReadySigned();
	if (executor.getGrade() > this->getExecuteGrade())
		this->throwTooLow();
	std::cout << "Bzzzzzzz" << std::endl;
	srand(time(0));
	if (std::rand() % 2)
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->_target << "'s robotomy failed" << std::endl;
}

// Getter and Setters

std::string const	RobotomyRequestForm::getTarget() const { return this->_target; }

// Overloads

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	if (this != &rhs)
		this->_target = rhs.getTarget();
	return *this;
}

// ----- by lejulien -----
