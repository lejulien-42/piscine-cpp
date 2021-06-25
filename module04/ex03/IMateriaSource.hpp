//
// -Created by lejulien @ 42-
//

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include <iostream>

class IMateriaSource
{
public:
	IMateriaSource(void);
	IMateriaSource(IMateriaSource const & src);
	~IMateriaSource(void);
	IMateriaSource &	operator=(IMateriaSource const & rhs);
	int	getFoo(void) const;
private:
	int	_foo;
};

#endif

// ----- by lejulien -----
