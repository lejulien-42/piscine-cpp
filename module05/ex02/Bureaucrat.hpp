//
// -Created by lejulien @ 42-
//

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{

	class GradeTooHighException: public std::exception
	{
		public:
			GradeTooHighException() throw() {};
			virtual ~GradeTooHighException() throw() {};
			virtual const char * what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			GradeTooLowException() throw() {};
			virtual ~GradeTooLowException() throw() {};
			virtual const char * what() const throw();
	};
public:
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(Bureaucrat const & src);
	~Bureaucrat(void);
	Bureaucrat &	operator=(Bureaucrat const & rhs);
	void				signForm(Form &form) const;
	int					getGrade(void) const;
	std::string const	getName(void) const;
	void				incrementGrade();
	void				decrementGrade();
	void				executeForm(Form const &form) const;
private:
	Bureaucrat(void);
	std::string const _name;
	int	_grade;

};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &rhs);

#endif

// ----- by lejulien -----
