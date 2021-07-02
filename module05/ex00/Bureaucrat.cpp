//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "Bureaucrat.hpp"

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

int	Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

const std::string Bureaucrat::getName() const
{
	return this->_name;
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

Bureaucrat::GradeTooLowException::GradeTooLowException() throw() {}
Bureaucrat::GradeTooHighException::GradeTooHighException() throw() {}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "grade too low.";
}
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "grade too high.";
}

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
