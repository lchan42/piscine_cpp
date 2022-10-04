#include "MateriaSource.hpp"
#include "Ice.hpp"


/******************************
 *		Coplien Form
 * ****************************/
MateriaSource::MateriaSource() : index(0){

	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource &cpy) {

	*this = cpy;
	std::cout << "MateriaSource param constructor called" << std::endl;
}

MateriaSource::~MateriaSource(){

	this->cleanStock();
	std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& rhs){

	this->cleanStock();
	for (int i = 0; i < STOCK_SIZE; i++)
			if (rhs._stock[i])
				this->_stock[i] = rhs._stock[i];
	return (*this);
}


/******************************
 *		Member function
 * ****************************/

void MateriaSource::learnMateria(AMateria* m){

	if (index >= STOCK_SIZE)
		index = 0;
	//if (_stock[index]) ???			//if there is already something
		//(stock in static chain list)
	//else
	//	check in static chain list
	_stock[index] = m;
}

bool	MateriaSource::checkInStock(std::string const & type){

	for (int i = 0; i < STOCK_SIZE; i++)
		if(!type.empty() && type == this->_stock[i]->getType())
			return (1);
	return (0);
}

AMateria* MateriaSource::createMateria(std::string const & type){

	if (checkInStock(type))
	{
		if (type == "Ice")
			return (new Ice);
		//return (new Cure);
	}
	return (NULL);
}

void	MateriaSource::cleanStock(){
		for (int i = 0; i < STOCK_SIZE; i++)
			if (this->_stock[i])
				delete this->_stock[i];
}

