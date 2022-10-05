#include "AMateria.hpp"


/******************************
 *		Coplien Form
 * ****************************/

AMateria::AMateria() : type(""), intType(NOTYPE){

	std::cout << "[AMateria] default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type), intType(NOTYPE){

	std::string	knownType[MAXTYPE] = {"Ice", "Cure", "Fire"};
	for (int i = 0; i < MAXTYPE; i++)
		if (type == knownType[i])
			this->intType = i;
	std::cout << "[AMateria] param constructor called" << std::endl;
}

AMateria::~AMateria(){

	std::cout << "[AMateria] default destructor called" << std::endl;
}

AMateria&	AMateria::operator=(const AMateria& rhs){

	this->type = rhs.type;
	std::cout << "[AMateria] operator= used" << std::endl;

	return (*this);
}

std::string const &	AMateria::getType() const{
	return (this->type);
}

void 	AMateria::use(ICharacter& target){

	switch (this->intType)
	{
	case ICE:
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
		break;
	case CURE:
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
		break;
	case FIRE:
		std::cout << "* shoots an fire bolt at " << target.getName() << " *" << std::endl;
		break;
	default:
		std::cout << "* unknown type does nothing *" << std::endl;
		break;
	}

}
