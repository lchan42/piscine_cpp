#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Fire.hpp"
#include "Cure.hpp"


/******************************
 *		Coplien Form
 * ****************************/
MateriaSource::MateriaSource() {

	std::cout << "[MateriaSource] default constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource &cpy) {

	*this = cpy;
	std::cout << "[MateriaSource] param constructor called" << std::endl;
}

MateriaSource::~MateriaSource(){

	std::cout << "[MateriaSource] destructor called" << std::endl;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& rhs){

	this->inventory = rhs.inventory;
	return (*this);
}


/******************************
 *		Member function
 * ****************************/
void MateriaSource::learnMateria(AMateria* m){

	this->inventory.addMateria(m);
}

AMateria* MateriaSource::createMateria(std::string const & type){

	if (this->inventory.checkInStock(type))
	{
		if (type == "ice")
			return (new Ice);
		else if (type == "cure")
			return (new Cure);
		else if (type == "fire")
		return (new Fire);
	}
	return (NULL);
}

Inventory & MateriaSource::getInventory(){
	return (this->inventory);
}
