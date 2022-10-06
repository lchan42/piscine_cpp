#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Fire.hpp"
#include "Cure.hpp"
#include <stdio.h>


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

	int	i = this->inventory.checkInStock(type);
	if (i >= 0)
		return(this->inventory.getMateria(i)->clone());
	return (NULL);
}

Inventory & MateriaSource::getInventory(){
	return (this->inventory);
}
