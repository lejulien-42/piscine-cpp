//
//	Made by lejulien
//

template<typename T>
void	iter(T *ptr, T length, void (*func)(T &))
{
	for (int i = 0; i < length; i++)
		func(ptr[i]);
}

template<typename T>
void	display(T &i)
{
	std::cout << " " << i;
}

//	Made by lejulien@42
