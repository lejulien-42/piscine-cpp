//
// -Created by lejulien @ 42
//

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern i = Intern();
	Form *test;
	Bureaucrat Boss("BOSS", 1);

	test = i.makeForm("shrubbery creation", "lejulien");
	std::cout << *test ;
	Boss.signForm(*test);
	Boss.executeForm(*test);
	delete test;
	test = i.makeForm("presidential pardon", "lejulien");
	Boss.signForm(*test);
	Boss.executeForm(*test);
	std::cout << *test ;
	delete test;
	return (0);
}
