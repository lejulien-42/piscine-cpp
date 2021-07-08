//
// -Created by lejulien @ 42-
//

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

class Data
{
public:
	Data(void);
	Data(Data const & src);
	~Data(void);
	Data &	operator=(Data const & rhs);
	int	getFoo(void) const;
private:
	int	_foo;
};

#endif

// ----- by lejulien -----
