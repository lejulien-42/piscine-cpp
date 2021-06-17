#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Thief.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");

	Victim	jim("Jimmy");
	Peon	joe("Joe");
	Thief	john("John");

	std::cout << robert << jim << joe << john;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(john);

	return 0;
}
