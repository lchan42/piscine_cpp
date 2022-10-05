#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include "ICharacter.hpp"
#include "Inventory.hpp"

class IMateriaSource {
	public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
	virtual Inventory& getInventory() = 0;
};

#endif
