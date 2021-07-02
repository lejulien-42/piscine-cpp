//
// -Created by lejulien @ 42
//

#include "Bureaucrat.hpp"
#include <exception>

int
	main()
{
	//
	// Testing instantiations
	//
	std::cout << "Instantiation test" << std::endl;

	// Testing grade too Low
	try
	{
		Bureaucrat *j = new Bureaucrat("John", 151);
		std::cout << *j;
		delete j;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	// Testing grade too High

	try
	{
		Bureaucrat *j = new Bureaucrat("John", 0);
		std::cout << *j;
		delete j;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	//
	// Testing while instantiated
	//
	std::cout << "Increment / Decrement test" << std::endl;

	// Testing grade too High
	Bureaucrat* b = new Bureaucrat("Bob", 2);

	try
	{
		std::cout << *b;
		b->incrementGrade();
		std::cout << *b;
		b->incrementGrade();
		std::cout << *b;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	delete b;

	// Testing grade too Low
	Bureaucrat* c = new Bureaucrat("Bob", 149);

	try
	{
		std::cout << *c;
		c->decrementGrade();
		std::cout << *c;
		c->decrementGrade();
		std::cout << *c;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	delete c;
	return (0);
}
