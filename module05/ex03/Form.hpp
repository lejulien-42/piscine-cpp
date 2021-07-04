//
// -Created by lejulien @ 42-
//

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	class NotReadySignedException: public std::exception
	{
		public:
			NotReadySignedException() throw() {};
			virtual ~NotReadySignedException() throw() {};
			virtual const char * what() const throw();
	};
	class AllReadySignedException: public std::exception
	{
		public:
			AllReadySignedException() throw() {};
			virtual ~AllReadySignedException() throw() {};
			virtual const char * what() const throw();
	};
	class GradeTooHighException: public std::exception
	{
		public:
			GradeTooHighException() throw() {};
			virtual ~GradeTooHighException() throw() {};
			virtual const char * what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		public:
			GradeTooLowException() throw() {};
			virtual ~GradeTooLowException() throw() {};
			virtual const char * what() const throw();
	};

public:
	Form(void);
	Form(const std::string name, const int sign_grade, const int execute_grade);
	Form(Form const & src);
	virtual void				beSigned(const Bureaucrat &b);
	virtual bool				getSigned() const;
	virtual int					getSignGrade() const;
	virtual int					getExecuteGrade() const;
	virtual const std::string	getName() const;
	virtual void				throwTooLow() const;
	virtual void				throwTooHigh() const;
	virtual void				throwNotReadySigned() const;
	virtual void		execute(Bureaucrat const &executor) const = 0;
	virtual ~Form(void);
	Form &	operator=(Form const & rhs);
private:
	const std::string	_name;
	bool				_signed;
	const int			_sign_grade;
	const int			_execute_grade;
};

std::ostream &operator<<(std::ostream &os, const Form &rhs);

#endif

// ----- by lejulien -----
