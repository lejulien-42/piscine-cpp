//
// Made by lejulien
//

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int
	main()
{
	Data p;

	std::cout << std::hex << &p << std::endl;
	uintptr_t t = serialize(&p);
	std::cout << std::hex << deserialize(t) << std::endl;
	return 0;
}
