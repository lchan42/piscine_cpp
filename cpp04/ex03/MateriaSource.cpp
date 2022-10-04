#include "MateriaSource.hpp"
#include "Ice.hpp"


/******************************
 *		Coplien Form
 * ****************************/
MateriaSource::MateriaSource() : {

	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource &cpy) {

	*this = cpy;
	std::cout << "MateriaSource param constructor called" << std::endl;
}

MateriaSource::~MateriaSource(){

	std::cout << "MateriaSource destructor called" << std::endl;
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
		if (type == "Ice")
			return (new Ice);
		//return (new Cure);
	}
	return (NULL);
}

// void	MateriaSource::cleanStock(){
// 		for (int i = 0; i < STOCK_SIZE; i++)
// 			if (this->_stock[i])
// 				delete this->_stock[i];
// }

