//
// Made by lejulien
//

#include <iostream>

class Data
{
	public:
	Data() {};
	Data(const Data &){};
	~Data() {};
	const Data &operator=(const Data &p) {return p;};
};

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
