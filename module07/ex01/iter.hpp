//
//	Made by lejulien
//

#pragma once
#include "string"
#include "iostream"

template<typename T>
void	iter(T *ptr, int length, void (*func)(T &))
{
	for (int i = 0; i < length; i++)
		func(ptr[i]);
}

template<typename T>
void	display(T &i)
{
	std::cout << i << std::endl;
}

//	Made by lejulien@42
