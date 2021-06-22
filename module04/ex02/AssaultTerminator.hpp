//
// -Created by lejulien @ 42-
//

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine
{
public:
	AssaultTerminator(void);
	AssaultTerminator(AssaultTerminator const & src);
	~AssaultTerminator(void);
	AssaultTerminator &	operator=(AssaultTerminator const & rhs);
	ISpaceMarine	*clone() const;
	void			battleCry() const;
	void			rangedAttack() const;
	void			meleeAttack() const;
};

#endif

// ----- by lejulien -----
