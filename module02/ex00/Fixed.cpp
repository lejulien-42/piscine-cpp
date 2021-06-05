//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0), _frac(8)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
    (void)this->_frac;
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src): _frac(8)
{
    std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void	Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

Fixed&	Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return *this;
}

// ----- by lejulien -----
