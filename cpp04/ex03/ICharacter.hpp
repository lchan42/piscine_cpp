#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include "AMateria.hpp"
//#include "Inventory.hpp"

class AMateria ;

class ICharacter {
	public:
	virtual ~ICharacter() {}

	virtual std::string const &	getName() const = 0;
	virtual void				equip(AMateria* m) = 0;
	virtual void				unequip(int idx) = 0;
	virtual void				use(int idx, ICharacter& target) = 0;
	//virtual Inventory &			getInventory() = 0;
};

#endif
