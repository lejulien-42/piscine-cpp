//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "Bureaucrat.hpp"

// Consturctors and destructor

Bureaucrat::Bureaucrat(void): _name("Bob"), _grade(150)
{}

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	*this = src;
	return ;
}

Bureaucrat::~Bureaucrat(void)
{}

// Getters

int	Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

const std::string Bureaucrat::getName() const
{
	return this->_name;
}

// Functions

void	Bureaucrat::signForm(Form &form) const
{
	try
	{
		if (this->_grade <= form.getSignGrade() && !form.getSigned())
		std::cout << this->_name << " signs " << form.getName() << std::endl;
		form.beSigned(*this);
	}
	catch (std::exception &e)
	{
		std::cout << this->_name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::incrementGrade()
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooHighException();
	this->_grade++;
}

void	Bureaucrat::executeForm(Form const &form) const
{
	try
	{
		if (this->_grade <= form.getExecuteGrade())
			std::cout << this->_name << " executes " << form.getName() << std::endl;
		form.execute(*this);
	}
	catch (std::exception &e)
	{
		std::cout << this->_name << " failed to execute because " << e.what() << std::endl;
	}

}

// Exceptions

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "grade too low.";
}
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "grade too high.";
}

// Overloads

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (this != &rhs)
		this->_grade = rhs.getGrade();
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &rhs)
{
	out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return out;
}

// ----- by lejulien -----
