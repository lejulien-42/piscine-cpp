//
// -Created by lejulien @ 42-
//

#ifndef SPACEMARINE_HPP
# define SPACEMARINE_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class SpaceMarine: public ISpaceMarine
{
public:
	SpaceMarine(void);
	SpaceMarine(SpaceMarine const & src);
	~SpaceMarine(void);
	SpaceMarine &	operator=(SpaceMarine const & rhs);
	ISpaceMarine	*clone() const;
	void			battleCry() const;
	void			rangedAttack() const;
	void			meleeAttack() const;
};

#endif

// ----- by lejulien -----
