#include "AMateria.hpp"

/******************************
 *		Coplien Form
 * ****************************/

AMateria::AMateria(){

	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type){

	for (int i = 0; i < LIMITEUR; i++)
		if ()
	if (type == "Ice")
		this->intType = ICE;
	std::cout << "AMateria param constructor called" << std::endl;
}

AMateria::~AMateria(){

	std::cout << "AMateria default destructor called" << std::endl;
}

AMateria&	AMateria::operator=(const AMateria& rhs){

	this->type = rhs.type;
	std::cout << "AMateria operator= used" << std::endl;

	return (*this);
}

std::string const &	AMateria::getType() const{
	return (this->type);
}

void 	AMateria::use(ICharacter& target){

	if (this->type == "Ice")
	if (this->type == "Ice")

}
