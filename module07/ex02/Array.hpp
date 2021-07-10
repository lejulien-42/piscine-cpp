//
//	Made by lejulien
//

#pragma once

#include <iostream>
#include <exception>

template<typename T>
class Array
{
public:
	class OobException:public std::exception
	{
	public:
		OobException() throw() {};
		virtual ~OobException() throw() {};
		virtual const char * what() const throw() {
			return "Out of bound of the Array";
		};
	};
	Array<T>(){
		this->_array = NULL;
		this->_size = 0;
	}
	Array<T>(unsigned int n){
		this->_array = new T[n];
		this->_size = n;
	}
	Array<T>(Array<T> const &src){
		this->_array = new T[src.size()];
		for (int i = 0; i < src.size(); i++)
			this->_array[i] = src[i];
		this->_size = src.size();
	}
	~Array<T>(){
		delete [] this->_array;
	}
	T &operator[](std::size_t index) const{
		if (index < 0 || index >= static_cast<std::size_t>(this->_size))
			throw Array::OobException();
		return this->_array[index];
	}
	Array<T> &operator=(Array<T> const &src)
	{
		if (this->_size != 0)
			delete[] this->_array;
		this->_array = new T[src.size()];
		for (int i = 0; i < src.size(); i++)
			this->_array[i] = src[i];
		this->_size = src.size();
		return *this;
	}
	int size() const{
		return this->_size;
	}
private:
	T	*_array;
	int	_size;
};

//	Made by lejulien@42
