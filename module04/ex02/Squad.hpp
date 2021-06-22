//
// -Created by lejulien @ 42-
//

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include <iostream>
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"

typedef struct	s_squad
{
	ISpaceMarine	*element;
	struct	s_squad	*next;
}				t_squad;

class Squad: public ISquad
{
public:
	Squad(void);
	Squad(Squad const & src);
	~Squad(void);
	int				getCount() const;
	ISpaceMarine	*getUnit(int n) const;
	int				push(ISpaceMarine *);
	Squad &	operator=(Squad const & rhs);
private:
	s_squad	*_squad;
};

#endif

// ----- by lejulien -----
