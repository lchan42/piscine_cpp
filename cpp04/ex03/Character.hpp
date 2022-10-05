
#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "Inventory.hpp"
# define INVENTORY_SIZE 4


class Character : public ICharacter {

	public:
		Character();
		Character(std::string name);
		Character(Character &cpy);
		virtual ~Character();

		Character&	operator=(const Character &rhs);

		virtual std::string const &	getName() const;
		virtual void 				equip(AMateria* m);
		virtual void 				unequip(int idx);
		virtual void 				use(int idx, ICharacter& target);

	private:
		//int				InventoryIndex;
		//AMateria		**inventory;
		Inventory		inventory;
		std::string		_name;
};

#endif


