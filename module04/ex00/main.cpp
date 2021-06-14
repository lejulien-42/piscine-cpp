#include "Sorcerer.hpp"
#include "Victim.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");

	std::cout << robert << jim;

	robert.polymorph(jim);

	return 0;
}
