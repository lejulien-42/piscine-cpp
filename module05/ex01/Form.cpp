//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "Form.hpp"

// Constructors and destructor

Form::Form(void): _name("2A"), _signed(false), _sign_grade(75), _execute_grade(1) {}

Form::Form(const std::string name, const int sign_grade, const int execute_grade):_name(name), _signed(false), _sign_grade(sign_grade), _execute_grade(execute_grade)
{
	if (sign_grade < 1)
		throw Form::GradeTooHighException();
	if (execute_grade < 1)
		throw Form::GradeTooHighException();
	if (sign_grade > 150)
		throw Form::GradeTooLowException();
	if (execute_grade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const & src): _name(src.getName()), _signed(src.getSigned()), _sign_grade(src.getSignGrade()), _execute_grade(src.getExecuteGrade()) {}

Form::~Form(void)
{}

// Functions

void Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > this->_sign_grade)
		throw Form::GradeTooLowException();
	this->_signed = true;
}

// Getters

bool Form::getSigned() const {return this->_signed;}
int Form::getSignGrade() const {return this->_sign_grade;}
int Form::getExecuteGrade() const {return this->_execute_grade;}
const std::string Form::getName() const {return this->_name;}

// Overloads

Form&	Form::operator=(Form const & rhs)
{
	if (this != &rhs)
		return *this;
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Form &rhs)
{
	os << "Form " << rhs.getName() << " status :" << std::endl << "- sign_grade : ";
	os << rhs.getSignGrade() << std::endl << "- execute_grade : " << rhs.getExecuteGrade();
	os << std::endl << "- signed : " << rhs.getSigned() << std::endl;
	return os;
}

// Exceptions

const char *Form::GradeTooLowException::what() const throw()
{
	return "grade too low.";
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "grade too high.";
}


// ----- by lejulien -----
