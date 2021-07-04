//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "PresidentialPardonForm.hpp"
#include <string>

// Constructors and destructor

PresidentialPardonForm::PresidentialPardonForm(void):Form("PresidentialPardonForm", 25, 5), _target("random") {}

PresidentialPardonForm::PresidentialPardonForm(std::string const target):Form("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src): Form("PresidentialPardonForm", 25, 5)
{
	this->_target = src.getTarget();
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

// Functions

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSigned())
		this->throwNotReadySigned();
	if (executor.getGrade() > this->getExecuteGrade())
		this->throwTooLow();
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

// Getter and Setters

std::string const	PresidentialPardonForm::getTarget() const { return this->_target; }

// Overloads

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	if (this != &rhs)
		this->_target = rhs.getTarget();
	return *this;
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

// ----- by lejulien -----
