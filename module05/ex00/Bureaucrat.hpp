//
// -Created by lejulien @ 42-
//

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
public:
	Bureaucrat(void);
	Bureaucrat(Bureaucrat const & src);
	~Bureaucrat(void);
	Bureaucrat &	operator=(Bureaucrat const & rhs);
	int	getFoo(void) const;
private:
	int	_foo;
};

#endif

// ----- by lejulien -----
