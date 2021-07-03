//
// -Created by lejulien @ 42
//

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>

int
	main()
{
	// Bad Initialization test
	std::cout << "- Bad Initialization test :" << std::endl << std::endl;
	try
	{
		Form *e = new Form("false Form", 150, 151);
		std::cout << "Low executive grade not detected" << std::endl << std::endl;
		delete e;
	}
	catch (std::exception &e)
	{
		std::cout << "Low executive grade grade detected : "<< e.what() << std::endl << std::endl;
	}

	try
	{
		Form *f = new Form("false form", 151, 150);
		std::cout << "Low signing grade not detected" << std::endl << std::endl;
		delete f;
	}
	catch (std::exception &e)
	{
		std::cout << "Low signing grade detected : "<< e.what() << std::endl << std::endl;
	}

	try
	{
		Form *g = new Form("false Form", 150, 0);
		std::cout << "High executive grade not detected" << std::endl << std::endl;
		delete g;
	}
	catch (std::exception &e)
	{
		std::cout << "High executive grade grade detected : "<< e.what() << std::endl << std::endl;
	}

	try
	{
		Form *h = new Form("false form", 0, 150);
		std::cout << "High signing grade not detected" << std::endl << std::endl;
		delete h;
	}
	catch (std::exception &e)
	{
		std::cout << "High signing grade detected : "<< e.what() << std::endl << std::endl;
	}


	// Good grade cases
	std::cout << "- Good grade test :" << std::endl << std::endl;
	Bureaucrat *b = new Bureaucrat("John", 50);
	Form *a = new Form("Devil deal", 150, 150);
	std::cout << *a << *b;
	b->signForm(*a);
	std::cout << *a << std::endl;

	// Wrong grade case

	std::cout << "- Wrong grade test :" << std::endl << std::endl;
	Bureaucrat *c = new Bureaucrat("Bob", 51);
	Form *d = new Form("Mayor allowance", 50, 1);
	std::cout << *d << *c;
	c->signForm(*d);
	std::cout << *d << std::endl;
	return (0);

}
