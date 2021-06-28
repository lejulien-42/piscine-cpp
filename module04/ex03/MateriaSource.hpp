//
// -Created by lejulien @ 42-
//

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include <iostream>

class MateriaSource: public IMateriaSource
{
public:
	MateriaSource(void);
	~MateriaSource(void);
	MateriaSource(MateriaSource const & src);
	MateriaSource &	operator=(MateriaSource const & rhs);
	virtual void learnMateria(AMateria *);
	virtual AMateria *createMateria(std::string const &type);
private:
	AMateria *_mat[4];
};

#endif

// ----- by lejulien -----
