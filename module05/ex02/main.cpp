//
// -Created by lejulien @ 42
//

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	// Out of Bound exceptions

	Form *a = new ShrubberyCreationForm("nowhere");
	Form *r = new RobotomyRequestForm("marvin");
	Bureaucrat *b = new Bureaucrat("Bob", 146);
	Bureaucrat *c = new Bureaucrat("BOSS", 1);
	std::cout << *a << *b;
	b->signForm(*a);
	b->incrementGrade();
	std::cout << *a << *b;

	b->signForm(*a);
	std::cout << *a;
	b->signForm(*a);

	// Execute permissions
	std::cout << std::endl << *r << std::endl;
	b->executeForm(*r);
	std::cout << *a;
	b->executeForm(*a);
	std::cout << *c << *a;
	c->executeForm(*a);
	std::cout << *r;
	c->signForm(*r);
	c->executeForm(*r);
	Form *f = new PresidentialPardonForm("marvin");
	c->signForm(*f);
	c->executeForm(*f);
	return (0);
}
