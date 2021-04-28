//
// -Created by lejulien @ 42-
//

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
public:
	Fixed(void);
	Fixed(Fixed const & src);
	Fixed(const int n);
    Fixed(const float f);
	~Fixed(void);
	Fixed &	operator=(Fixed const & rhs);
	int	getRawBits(void) const;
	int toInt() const;
	float toFloat() const;
private:
	int	_value;
	const int _frac;
};

std::ostream & operator<<(std::ostream& os, Fixed const & fx);

#endif

// ----- by lejulien -----
