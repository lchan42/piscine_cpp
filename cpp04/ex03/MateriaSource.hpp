#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "Macro.hpp"
#include "Inventory.hpp"
//# define STOCK_SIZE 4

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource();
		MateriaSource(MateriaSource &cpy);
		virtual ~MateriaSource();

		MateriaSource&	operator= (const MateriaSource & rhs);

		virtual void learnMateria(AMateria* m);
		virtual AMateria* createMateria(std::string const & type);
		virtual Inventory& getInventory();

		private:

		Inventory		inventory;
};

#endif
