//
// -Created by lejulien @ 42-
//

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character: public ICharacter
{
public:
	Character(void);
	Character(std::string const &name);
	Character(Character const & src);
	~Character(void);
	Character &	operator=(Character const & rhs);
	std::string	const &getName(void) const;
	AMateria *getMateria(int idx) const;
	void	equip(AMateria *m);
	void	unequip(int idx);
	void	use(int idx, ICharacter& target);
private:
	AMateria *_mat[4];
	std::string _name;
};

#endif

// ----- by lejulien -----
