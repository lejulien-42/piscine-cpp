#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Thief.hpp"
#include "Shrek.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");

	Victim	jim("Jimmy");
	Peon	joe("Joe");
	Thief	john("John");
	Shrek	shrek("Shrek");

	std::cout << robert << jim << joe << john << shrek;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(john);
	robert.polymorph(shrek);

	return 0;
}
