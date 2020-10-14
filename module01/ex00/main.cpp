#include <iostream>
#include "Pony.hpp"


void
	ponyOnTheStack()
{
	std::cout << "This is the pony on the stack :\n";
	Pony	p;
	p.born();
	p.eat();
}

void
	ponyOnTheHeap()
{
	std::cout << "This is the pony on the heap :\n";
	Pony	*p = new Pony;
	p->born();
	p->run();
	delete p;
}

int
	main()
{
	ponyOnTheStack();
	std::cout << "\n";
	ponyOnTheHeap();
	return (0);
}
