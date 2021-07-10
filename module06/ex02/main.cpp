//
// Made by lejulie
//

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <exception>

Base
	*generate(void)
{
	Base *ret;
	int rand;

	rand = std::rand()%3;
	switch(rand)
	{
		case 0:
			{
			ret = new A();
			break;
			}
		case 1:
			{
			ret = new B();
			break;
			}
		case 2:
			{
		 	ret = new C();
			break;
			}
	}
	return (ret);
}

void
	identify_from_reference(Base &p)
{
	try{
		Base &a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void)a;
	} catch (std::exception &e) {}
	try{
		Base &b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		(void)b;
	} catch (std::exception &e) {}
	try{
		Base &c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		(void)c;
	} catch (std::exception &e) {}
}

void
	identify_from_pointer(Base *p)
{
	A *a;
	B *b;
	C *c;

	if ((a = dynamic_cast<A *>(p)))
		std::cout << "A" << std::endl;
	if((b = dynamic_cast<B *>(p)))
		std::cout << "B" << std::endl;
	if ((c = dynamic_cast<C *>(p)))
		std::cout << "C" << std::endl;
}

int
	main()
{
	Base *a = generate();
	identify_from_reference(*a);
	identify_from_pointer(a);
	Base *b = generate();
	identify_from_reference(*b);
	identify_from_pointer(b);
	Base *c = generate();
	identify_from_reference(*c);
	identify_from_pointer(c);
	Base *d = generate();
	identify_from_reference(*d);
	identify_from_pointer(d);
	Base *e = generate();
	identify_from_reference(*e);
	identify_from_pointer(e);
	Base *f = generate();
	identify_from_reference(*f);
	identify_from_pointer(f);
	return 0;
}

// Made by lejulien @ 42
