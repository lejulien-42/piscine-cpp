//
// -Created by lejulien @ 42-
//

#ifndef CHUCKNORIS_HPP
# define CHUCKNORIS_HPP

#include <iostream>
#include "Enemy.hpp"

class ChuckNoris: public Enemy
{
public:
	ChuckNoris(void);
	ChuckNoris(ChuckNoris const & src);
	~ChuckNoris(void);
	ChuckNoris &	operator=(ChuckNoris const & rhs);
	void	takeDamage(int damage);
};

#endif

// ----- by lejulien -----
