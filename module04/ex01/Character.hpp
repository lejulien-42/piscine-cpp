//
// -Created by lejulien @ 42-
//

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
public:
	Character(void);
	Character(std::string const &name);
	Character(Character const & src);
	~Character(void);
	void		recoverAP();
	void		equip(AWeapon *weapon);
	void		attack(Enemy *enemy);
	std::string	getName() const;
	AWeapon		*getWeapon() const;
	int			getAP() const;
	Character &	operator=(Character const & rhs);
private:
	std::string	_name;
	AWeapon		*_weapon;
	int			_ap;
};

std::ostream &operator<<(std::ostream &os, Character const &fx);

#endif

// ----- by lejulien -----
