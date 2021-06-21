//
// -Created by lejulien @ 42-
//

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine
{
public:
	TacticalMarine(void);
	TacticalMarine(TacticalMarine const & src);
	~TacticalMarine(void);
	TacticalMarine &	operator=(TacticalMarine const & rhs);
	ISpaceMarine	*clone() const;
	void			battleCry() const;
	void			rangedAttack() const;
	void			meleeAttack() const;
};

#endif

// ----- by lejulien -----
