#include <iostream>
#include "Pony.hpp"

Pony::~Pony()
{
	std::cout << "This pony is dead\n";
}

void Pony::born()
{
	std::cout << "A new pony is born\n";
}

void Pony::eat()
{
	std::cout << "The pony eat some weats\n";
}

void Pony::run()
{
	std::cout << "Look at him go this pony is so fast\n";
}
