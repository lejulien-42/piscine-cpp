//
// -Created by lejulien @ 42-
//

#include <iostream>
#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _value(0), _frac(8)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src): _frac(8)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

Fixed::Fixed(const int n): _frac(8)
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = n << this->_frac;
}

Fixed::Fixed(const float f): _frac(8)
{
    std::cout << "Float constructor called" << std::endl;
    this->_value = (int)(roundf(f * (1 << this->_frac)));
}

Fixed::~Fixed(void)
{
    (void)this->_frac;
    std::cout << "Destructor called" << std::endl;
}

int Fixed::toInt() const
{
    return (this->_value >> this->_frac);
}
float Fixed::toFloat() const
{
    return ((float)this->_value / (float)(1 << this->_frac));
}

int Fixed::getRawBits() const {
	return this->_value;
}

Fixed&	Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fx)
{
    os << fx.toFloat();
    return os;
}

// ----- by lejulien -----
