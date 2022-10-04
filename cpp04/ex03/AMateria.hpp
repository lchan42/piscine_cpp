#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

#include "ICharacter.hpp"

enum {
	ICE,
	CURE,
	FIRE,
	LIMITEUR
};



class ICharacter;

class AMateria {
	protected:

	public:
	AMateria();
	AMateria(std::string const & type);
	virtual ~AMateria();

	AMateria&	operator=(const AMateria& rhs);

	std::string const &	getType() const; 			//Returns the materia type
	virtual AMateria*	clone() const = 0;
	virtual void 		use(ICharacter& target);

	private:
		std::string		type;
		int				intType;
		std::string		MateriaTab[LIMITEUR];
};



#endif
